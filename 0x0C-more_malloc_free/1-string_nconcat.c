#include "holberton.h"
int _strlen(char *s);
/**
 * string_nconcat - concatenates two strings
 * @s1: first strings
 * @s2: second string
 * @n: number of bytes to add from s2
 *
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, z, r, i, p,  clen;
	char *memptr;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	clen = len1 + len2;
	if (n >= len2)
		memptr = malloc((clen + 1) * sizeof(char));
	else
		memptr = malloc((len1 + n + 1) * sizeof(char));
	if (memptr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		*(memptr + i) = *(s1 + i);
		i++;
	}
	if (n >= len2)
	{
		j = len1;
		p = 0;
		while (j < clen)
		{
			*(memptr + j) = *(s2 + p);
			j++;
			p++;
		}
		*(memptr + j) = '\0';
	}
	else
	{
		z = len1;
		r = 0;
		while (r < n)
		{
			*(memptr + z) = *(s2 + r);
			z++;
			r++;
		}
		*(memptr + z) = '\0';
	}
	return (memptr);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
