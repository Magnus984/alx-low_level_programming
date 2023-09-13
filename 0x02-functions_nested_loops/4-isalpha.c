#include "main.h"

/**
 * _isalpha - Checks if character is an alphabet
 *
 * Return - 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	char f = (char)c;

	if (((f >= 'a') && (f <= 'z')) || ((f >= 'A') && (f <= 'Z')))
		return (1);
	else
		return (0);
}

