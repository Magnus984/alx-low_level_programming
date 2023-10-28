#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * argc: argument count
 * argv: array of arguments
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int i, sum, pro_arg;

	sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{
		pro_arg = atoi(argv[i]);
		if (!pro_arg)
		{
			printf("Error\n");
			return (1);
		}
		sum += pro_arg;
	}
	printf("%d\n", sum);
	return (0);
}
