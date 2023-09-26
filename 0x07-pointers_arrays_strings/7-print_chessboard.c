#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer
 *
 * Return: no retrun value
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char ch = a[i][j];

			_putchar(ch);
		}
		_putchar('\n');
	}
}
