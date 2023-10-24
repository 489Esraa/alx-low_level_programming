#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously
* created by your alloc_grid function.
* @grid : int
* @height : int
* Return: void
*/

void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
