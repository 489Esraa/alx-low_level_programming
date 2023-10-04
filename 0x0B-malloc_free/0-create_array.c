#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
*/
char *create_array(unsigned int size, char c)
{
char *str;
int x;

str = malloc(size);
if (size == 0 || str == NULL)
{
return (0);
}
for (x = 0; x < size; x++)
{
str[x] = c;
}
return (str);
}
