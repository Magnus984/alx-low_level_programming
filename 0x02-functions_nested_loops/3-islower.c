#include "main.h"

/**
 * _islower - Checks if character is lowercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char f = (char)c;

	if ((f >= 'a') && (f <= 'z'))
		return (1);
	else
		return (0);
}

