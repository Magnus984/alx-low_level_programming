#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: input paramter
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
		last = n % 10;
		_putchar(last + '0');
	}
	else if (n > 0)
	{
		last = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = 0;
		_putchar(last + '0');
	}
	return (last);
}
