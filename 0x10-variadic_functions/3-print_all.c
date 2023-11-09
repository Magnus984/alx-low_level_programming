#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: no return value
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	int firstArg = 1;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				if (!firstArg)
					printf(", ");
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				if (!firstArg)
					printf(", ");
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				if (!firstArg)
					printf(", ");
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (!firstArg)
					printf(", ");
				str = va_arg(args, char *);
				if (str == NULL)
					printf("nil");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		firstArg = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}

