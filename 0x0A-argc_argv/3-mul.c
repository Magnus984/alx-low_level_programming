#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, times = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		if (i)
		{
			times = times * atoi(argv[i]);
		}

	}
	printf("%d\n", times);
	return (0);
}
