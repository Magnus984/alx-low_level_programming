#include<unistd.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length = strlen(str1);

	write(2, str1, length);
	return (1);
}

