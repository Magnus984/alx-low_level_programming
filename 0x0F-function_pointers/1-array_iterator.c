#include "function_pointers.h"

/**
 * array_iterator - executes in each element array
 * @array: input array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: no return value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action != 0)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}

}
