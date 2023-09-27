#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: pointer input
 *
 * Return: returns string length
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
