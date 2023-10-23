#include "holberton.h"
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements in bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memptr = malloc(nmemb * size);
	if (memptr == NULL)
		return (NULL);
	_memset(memptr, 0, (nmemb * size));
	return (memptr);
}

/**
 * _memset - fills memory with a constant byte
 * @s: character array to fill
 * @b: constant byte to fill with
 * @n: how many bytes to fill
 * Return: the pointer to the char array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
