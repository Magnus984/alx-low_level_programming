#include "main.h"
/**
 * support_function - supports the prime number function
 * @n: number
 * @a: number for comparison
 *
 * Return: returns 1 or 0
 */
int support_function(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + support_function(n, a + 1));

}

/**
 * is_prime_number - checks for primenumber
 * @n: input number
 *
 * Return: returns 1 or 0 when number is prime or not respectively
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (support_function(n, 2));
}
