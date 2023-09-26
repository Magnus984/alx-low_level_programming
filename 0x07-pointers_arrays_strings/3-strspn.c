#include "main.h"

/**
 * _strspn - gets the length of s prefix substring
 * @s: string that is searched
 * @accept: string of characters to be searched for in string s
 *
 * Return: number of bytes that matches characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, term;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		term = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				term = 0;
				break;
			}
		}
		if (term == 1)
			break;
	}
	return (i);
}
