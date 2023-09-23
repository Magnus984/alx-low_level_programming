#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer parameter
 * @s2: pointer parameter
 *
 * Return: integer values(1, 0, -1)
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	if (i == j)
	{
		int k;

		for (k = 0; k < i; k++)
			if (s1[k] == s2[k])
				continue;
		if (k >= i)
			return (0);
	}
	else if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	return (0);
}
