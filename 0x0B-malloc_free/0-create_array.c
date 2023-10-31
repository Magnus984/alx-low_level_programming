#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character used to initialize array
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array_ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array_ch = (char *) malloc(sizeof(*array_ch) * size);
	if (!array_ch)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(array_ch + i) = c;
		i++;
	}

	return (array_ch);
}
