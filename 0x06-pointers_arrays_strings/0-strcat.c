#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: destination string
 * @src: source string
 *
 * Return: returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (j >= 0)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
