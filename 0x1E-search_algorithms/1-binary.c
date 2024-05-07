#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: pointer to first element in array
 * @size: length of array
 * @value: target value
 *
 * Return: index where value is located or -1 if
 * value is not present of if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int L, R, m;

	if (array != NULL)
	{
		L = 0;
		R = (int)size - 1;
		while (L <= R)
		{
			printf("Searching in array: ");
			print_array(L, R, array);
			m = (L + R) / 2;
			if (array[m] < value)
				L = m + 1;
			else if (array[m] > value)
				R = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}

/**
 * print_array - prints part of array being searched
 * @L: lower boundary of array
 * @R: upper boundary of array
 * @array: pointer to array
 *
 * Return: no return value
 */
void print_array(int L, int R, int *array)
{
	int i;

	for (i = L; i <= R; i++)
	{
		if (i == R)
			printf("%d\n", array[i]);
		printf("%d,", array[i]);
	}
}
