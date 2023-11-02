#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: a pointer to newly created array
 */
int *array_range(int min, int max)
{
	int step;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	step = 0;
	while (max != min)
	{
		step++;
		max--;
	}
	ptr = malloc(sizeof(*ptr) * (step + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < (step + 1); i++, min++)
	{
		*(ptr + i) = min;
	}
	return (ptr);
}
