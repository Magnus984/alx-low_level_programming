#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: a pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;
	int i, j;
	int total_len;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;
	total_len = s1len + s2len;
	concat_str = malloc(sizeof(char) * (total_len + 1));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < s2len; j++)
	{
		concat_str[j + i] = s2[j];
	}
	concat_str[total_len] = '\0';
	return (concat_str);
}
