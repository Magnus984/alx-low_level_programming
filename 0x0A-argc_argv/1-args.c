#include "main.h"
#include <stdlib.h>

/**
 * main - prints cml argument count
 * @argc: number of arguments
 * @argv: one dimension array of string arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int red_argc;

	red_argc = argc - 1;
	_putchar(red_argc + '0');
	_putchar('\n');
	exit(EXIT_SUCCESS);
}
