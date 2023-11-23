#include "main.h"

/**
 * get_bit - returns value of a bit at given index.
 * @n: number
 * @index: position of bit to be returned.
 *
 * Return: the value of the bit at index index or -1
 * if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	int bit;
	int idx = (int)index;

	for (i = 31; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (i == idx)
			return (bit);
	}
	return (-1);
}



