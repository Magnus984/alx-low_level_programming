#include "main.h"

/**
 * _memset - fills first number of bytes
 * @s: points to array in main function
 * @b: constant filled in array
 * @n: number of times constant is filled in memory
 *
 * Return: a pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
