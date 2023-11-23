#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j, bits_number;
	int arr[32];
	int arr2[32];
	int bit;
	int k = 0;

	for (i = 31; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		arr[k] = bit;
		k++;
	}
	k = 0;
	for (j = 31; j >= 0; j--)
	{
		bit = (m >> j) & 1;
		arr2[k] = bit;
		k++;
	}
	bits_number = 0;
	for (i = 0; i < 32; i++)
	{
		if (arr[i] != arr2[i])
			bits_number += 1;
	}
	return (bits_number);
}
