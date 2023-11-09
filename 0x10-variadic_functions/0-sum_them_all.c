#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: required argument which represents number
 * of optional arguments
 *
 * Return: sum or 0 if n is 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list op_args;

	if (n == 0)
		return (0);
	va_start(op_args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(op_args, int);
	}
	va_end(op_args);
	return (sum);
}



