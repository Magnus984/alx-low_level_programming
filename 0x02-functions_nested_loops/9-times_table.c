#include "main.h"

/**
 * times_table - function
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		 _putchar('\n');
	}
}

