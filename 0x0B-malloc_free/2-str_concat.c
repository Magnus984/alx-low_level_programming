#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to newly allocated space in
 * memory which contains the contents of s1,
 * followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, k, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;
	new = (char *)malloc(sizeof(*new) * (s1_len + s2_len + 1));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	i = 0;
	k = 0;
	while (i < s1_len)
	{
		*(new + k) = *(s1 + i);
		k++;
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		*(new + k) = *(s2 + j);
		k++;
		j++;
	}
	*(new + k) = '\0';
	return (new);
}
