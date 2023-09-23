#include "main.h"

/**
 * cap_string - capitalizes string
 * @s - pointer variable to string to be capitalized
 *
 * Return: pointer
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[13] = {',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}', ' ', '\n', '\t'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && s[i + 1] != '\0' &&
			s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ' ';
			}
		}
	}
	return (s);
}
