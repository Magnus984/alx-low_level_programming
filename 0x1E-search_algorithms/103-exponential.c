#include "search_algos.h"
/**
 * exponential_search - searches for value in sorted array
 * of integers using the exponential search algorithm
 * @array: pointer to array
 * @size: length of array
 * @value: target value
 *
 * Return: first index of value or -1 if element is not
 * found in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	int start, low, high, mid;

	start = 1;
	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}
	while (start < (int)size && array[start] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start *= 2;
	}
	low = start / 2;
	high = min(start, size - 1);
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array:");
		print_array(low, high, array);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
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
		else
			printf("%d, ", array[i]);
	}
}
