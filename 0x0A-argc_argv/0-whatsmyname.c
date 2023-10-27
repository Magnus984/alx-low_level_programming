#include "main.h"
#include <stdlib.h>

/**
 * main - Prints name of first argument
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: returns zero indicating success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *str;
	int i;

	i = 0;
	str = argv[0];
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	exit(EXIT_SUCCESS);
}

