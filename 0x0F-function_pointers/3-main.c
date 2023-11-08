#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int result;
	int (*operation)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
	atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);
	if (operation != NULL)
	{
		result = operation(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
