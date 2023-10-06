#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to newly allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr_to_array;
	int length = max - min + 1;
	int i;

	if (min > max)
		return (NULL);
	ptr_to_array = malloc(length * sizeof(int));

	if (ptr_to_array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		ptr_to_array[i] = min;
		min++;
	}
	return (ptr_to_array);
}
