#include "main.h"

/**
 * _pow_recursion - calculates x raised
 * to the power y
 * @x: base number
 * @y: power or exponent
 *
 * Return: value of x raised
 * to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
