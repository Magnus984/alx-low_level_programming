#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base number
 * @y: exponent
 *
 * Return: returns an integer value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	else if (y > 1)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	return (0);

}
