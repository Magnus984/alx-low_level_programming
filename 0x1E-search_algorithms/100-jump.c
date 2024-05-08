#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in
 * a sorted array of integers using the
 * jump search algorithm
 * @array: pointer to array
 * @size: length of array
 * @value: target value
 *
 * Return: index of value else -1 if value
 * is not present in array or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int a, b, len;

	a = 0;
	len = (int)size;
	b = sqrt(len);

	while (array[min(b, len) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b;
		b += sqrt(len);
		if (a >= len)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", a, min(b, len) - 1);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a += 1;
		if (a == min(b, len))
			return (-1);
	}
	if (array[a] == value)
	{
		return (a);
	}
	return (-1);
}

/**
 * min - finds minimum value
 * @a: first value
 * @b: second value
 *
 * Return: smallest value or any if equal
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
	return (a);
}
