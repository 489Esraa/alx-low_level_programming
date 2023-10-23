#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *intarray;
	int p, j, count;

	if (min > max)
		return (NULL);
	 count = ((max - min) + 1);
	intarray = malloc(count * sizeof(int));
	if (intarray == NULL)
		return (NULL);
	j = min;
	for (p = 0; p < count; p++, j++)
		intarray[p] = j;
	return (intarray);
}
