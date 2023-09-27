#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: input variable
 *
 * Return: returns an integer value
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
	return (0);
}
