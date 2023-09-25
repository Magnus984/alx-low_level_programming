#include "main.h"

/**
 * _memcpy - copies memory area from source to destination
 * @dest: destination array pointer
 * @src: source array pointer
 * @n : number of times source is copied to destination
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
