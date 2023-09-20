#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: input integer one
 * @b: input integer two
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int var1;

	var1 = *a;
	*a = *b;
	*b = var1;
}
