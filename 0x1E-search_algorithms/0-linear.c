#include "search_algos.h"

/**
 * linear_search - searches for value in an array using
 * linear search algorithm
 * @array: pointer to the first element of array
 * @size: length of array
 * @value: target value
 *
 * Return: first index of value or -1 if value is not present
 * in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
