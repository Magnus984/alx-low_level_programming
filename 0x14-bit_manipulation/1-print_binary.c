#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: no return value.
 */
void print_binary(unsigned long int n)
{
	unsigned int start_printing, bit;
	int i;

	start_printing = 0;
	for (i = 31; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			start_printing = 1;
		if (start_printing)
			_putchar(bit + '0');
	}
	if (n == 0)
		_putchar('0');
}
