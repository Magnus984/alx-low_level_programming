#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D grid created by
 * alloc_grid
 * @grid: input pointer
 * @height: height of array
 *
 * Return: no return value
 */
void free_grid(int **grid, int height)
{	int i;
	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
