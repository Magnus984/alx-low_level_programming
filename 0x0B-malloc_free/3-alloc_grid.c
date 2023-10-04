#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array
 * of integers.
 * @width: width or length of array
 * @height: height of array
 *
 * Return: a pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **row;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	row = malloc(sizeof(int *) *  height);
	if (row == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		row[i] = malloc(sizeof(int) * width);
		if (row[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			row[i][j] = 0;
	}
	return (row);
}
