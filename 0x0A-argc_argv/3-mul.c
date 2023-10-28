#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: one dimension array that
 * holds arguments
 *
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}

