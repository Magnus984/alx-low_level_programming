#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string on2
 * @s2: string two
 * @n: first n of string two
 *
 * Return: returns pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j, k, s1_len;
	unsigned int s2_len, new_s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		new_s2_len = s2_len;
	else
		new_s2_len = n;
	new = malloc((s1_len + new_s2_len + 1) * sizeof(char));
	if (!new)
	{
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
	while (j < new_s2_len)
	{
		*(new + k) = *(s2 + j);
		k++;
		j++;
	}
	*(new + k) = '\0';
	return (new);
}
