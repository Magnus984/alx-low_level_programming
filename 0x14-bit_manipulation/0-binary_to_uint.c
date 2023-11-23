#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if it fails.
 */
unsigned int binary_to_uint(const char *b)
{
	bool if_bin_or_null;
	int i, j, sum, value, len;

	if_bin_or_null = true;
	if (b == NULL)
		if_bin_or_null = false;
	len = 0;
	while (b[len] != '\0')
	{

		if (b[len] != '0' && b[len] != '1')
			if_bin_or_null = false;
		len++;
	}
	if (if_bin_or_null)
	{
		sum = 0;
		j = 0;
		i = len;
		for (j = 0; j < len; j++)
		{
			value = b[j] - '0';
			sum += value << (i - 1);
			i--;
		}
		return (sum);
	}
	return (0);
}
