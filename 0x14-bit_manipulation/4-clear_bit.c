#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: position of bit
 * n: pointer to number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1;
	for (i = 0; i < index; i++)
		mask <<= 1;
	*n = *n & (~mask);
	return (1);
}
