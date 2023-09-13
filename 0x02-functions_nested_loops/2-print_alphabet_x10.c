#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

