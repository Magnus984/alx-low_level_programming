#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates space in memory which contains
 * a copy of the string given as a parameter.
 * @str: string parameter
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	new_str = (char *) malloc(sizeof(*str) * (i + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		*(new_str + j) = *(str + j);
		j++;
	}
	*(new_str + j) = '\0';
	return (new_str);
}
