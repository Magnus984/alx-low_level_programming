#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
