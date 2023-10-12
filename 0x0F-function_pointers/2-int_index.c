#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer input array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: -1 if no element matches
 * or if size is less than or equal to 0 and
 * returns index of first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp != 0)
	{
		if (size <= 0)
			return (-1);

		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);
	}

	return (-1);
}
