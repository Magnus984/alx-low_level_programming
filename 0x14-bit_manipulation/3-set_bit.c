#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at
 * a given index
 * @n: pointer to number.
 * @index: position of bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1;
	for (i = 0; i < index; i++)
		mask <<= 1;
	*n = *n | mask;
	return (1);
}

