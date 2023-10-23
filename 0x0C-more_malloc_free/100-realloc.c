#include "holberton.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to memory previously allocated
 * @old_size: size (in bytes) allocated for ptr
 * @new_size: size (in bytes) of new memory block
 *
 * Return: pointer to void, null, or 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}
/**
 * _memcpy - copies memory area
 * @dest: character array to copy to
 * @src: character array to copy from
 * @n: how many bytes to copy
 * Return: the pointer to the char array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
