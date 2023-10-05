#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - The returned pointer should point
 * to a newly allocated space in memory
 * which contains the contents of s1,s2
 * @s1 : first string in ptr
 * @s2 : second string in ptr
 * Return: pointer to the array intialized or null
*/
char *str_concat(char *s1, char *s2)
{
int a, x;
size1 = strlen(s1);
size2 = strlen(s2);
if (s1 == NULL || s2 == NULL)
{
return ("\0");
}
size1 = strlen(s1);
size2 = strlen(s2);
char *ptr = (char *)malloc((size1 + size2) * sizeof(char) + 1);
if (ptr == NULL)
{
return (NULL);
}
for (x = 0; x < size1; x++)
ptr[x] = s1[x];
for (a = 0; a <= size2; a++)
{
ptr[size1 + a] = s2[a];
}
ptr[a] = '\0';
return (ptr);
}
