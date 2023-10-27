#include "main.h"
#include <stdlib.h>

/**
 * main - prints arguments its receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[])
{
	char *str;
	int i;

	while (argc--)
	{
		str = *argv;
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
		_putchar('\n');
		argv++;
	}
	exit(EXIT_SUCCESS);
}
