#include "main.h"

/**
 * supportive_function - does the increment of both
 * the root and number
 * @number: input number
 * @sqrt: root
 *
 * Return: returns -1 or root of number
 */
int supportive_function(int number, int sqrt)
{
	if ((sqrt * sqrt) == number)
		return (sqrt);
	else if ((sqrt * sqrt) > number)
		return (-1);
	else if ((sqrt * sqrt) < number)
	{
		sqrt++;
		return (supportive_function(number, sqrt));
	}
	return (0);
}

/**
 * _sqrt_recursion - finds the root of a number
 * @n: number
 *
 * Return: root of number or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	else if (n)
		return (supportive_function(n, 0));
	return (0);
}
