#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer parameter 
 * @s2: pointer parameter
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (res == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		res = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (res);
}

