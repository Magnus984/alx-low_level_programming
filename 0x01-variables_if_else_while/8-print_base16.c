#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if ((i >= 10) && (i <= 15))
			putchar(i - 10 + 'a');
		else
			putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

