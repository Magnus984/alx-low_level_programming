#include "main.h"

/**
 * _sqrt_recursion - calc natural square root
 * of n
 * @n: number
 * Return: a call to function calculateSquareRoot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (calculateSquareRoot(n, 1));
}
/**
 * calculateSquareRoot - actual implementation
 * logic
 * @n: number
 * @guess: guess number
 *
 * Return: recursively calls itself
 */
int calculateSquareRoot(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}
	return (calculateSquareRoot(n, guess + 1));
}
