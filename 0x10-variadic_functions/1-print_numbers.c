#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: no return value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pro_args;
	unsigned int i;

	va_start(pro_args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pro_args, int));
		if (separator == NULL || i == n - 1)
			continue;
		printf("%s", separator);
	}
	va_end(pro_args);
	printf("\n");
}
