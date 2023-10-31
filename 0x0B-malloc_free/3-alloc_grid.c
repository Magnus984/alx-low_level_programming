#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - dynamically allocates memory for
 * for a 2 dimensional array of integers
 * @width : width or row of array
 * @height : column of array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr_one, i;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr_one = (int **)malloc(sizeof(int *) * height);
	if (!ptr_one)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr_one[i] = (int *)malloc(sizeof(int) * width);
		if (ptr_one[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(ptr_one[j]);
			}
			free(ptr_one);
			return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			ptr_one[h][w] = 0;
	}
	return (ptr_one);
}
