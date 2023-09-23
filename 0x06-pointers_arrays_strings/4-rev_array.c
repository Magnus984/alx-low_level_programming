#include "main.h"

/**
 * reverse_array - reverses integer array
 * @a: integer array input parameter
 * @n: number of elements in array
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i, j, var;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			var = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = var;
		}
	}
}
