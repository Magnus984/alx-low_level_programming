#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: first number of bytes of source
 *
 * Return: pointer to alloacted space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i;
	unsigned int j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0' && s2_len < n)
		s2_len++;
	result = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];
	for (j = 0; j < s2_len; j++)
		result[s1_len + j] = s2[j];
	result[s1_len + s2_len] = '\0';

	return (result);
}
