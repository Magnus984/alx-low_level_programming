#include "main.h"

/**
 * _strlen - returns lenght of string
 * @s: character input
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
