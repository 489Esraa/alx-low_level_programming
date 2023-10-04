#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
*/
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : size of malloc
 * Return: pointer to the array intialized or null
*/
char *_strdup(char *str)
{
int i;
int size = _strlen(str);

char *ptr = (char *)malloc((size + 1) * sizeof(char));
if (ptr == NULL)
return NULL;
for (i = 0; i <= size; i++)
{
*(ptr + i) = str[i];
}
return (ptr);
}
