#include "search_algos.h"
/**
 * interpolation_search - searches value in a sorted array
 * of integers using the interpolation search algorithm
 * @array: pointer to array
 * @size: length of array
 * @value:target value
 *
 * Return: first index of value if present, if not present
 * or array is NULL -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high, low;
	size_t pos;

	low = 0;
	high = (int)size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return pos;
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
