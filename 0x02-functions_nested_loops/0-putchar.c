#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char data[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
		_putchar(data[i]);
	_putchar('\n');

	return (0);
}

