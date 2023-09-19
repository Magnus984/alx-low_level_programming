#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character input
 *
 * Return: no return value
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;
	int j;
	char *str;
	char temp;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
		break;
		counter++;
	}
	str = s;

	for (i = 0; i < (counter - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
																							}
	}
