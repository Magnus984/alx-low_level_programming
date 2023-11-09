#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed
 * by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 * Return: no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pro_args;
	unsigned int i;

	va_start(pro_args, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(pro_args, char *);

		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);

		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);		
	}
	va_end(pro_args);
	printf("\n");
}
