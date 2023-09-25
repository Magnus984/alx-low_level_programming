#include "main.h"

/**
 * _strchr - locates character in string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
