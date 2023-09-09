#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, length, digit;
	char n_array[12];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(n_array, "%d", n);
	length = strlen(n_array);
	digit = n_array[length - 1] - '0';
	if (n < 0)
		digit = -digit;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if ((digit < 6) && (digit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}

