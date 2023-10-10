#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
int **rows;
int x, j;

if (width <= 0 || height <= 0)
return (NULL);

rows = (int **)malloc(wight * sizeof(int *));
if (rows == NULL)
return (NULL);
for (x = 0; x < width; x++)
{
rows[x] = (int *)malloc(height * sizeof(int));
if (!rows)
{
for (j = 0; j < x; j++)
{
free([j]);
}
free(rows);
return (NULL);
}
}
}
for (j = 0; j < height; j++){
for (x = 0; x < width; x++)
rows[j][x] = 0;
}
return (rows);
}
