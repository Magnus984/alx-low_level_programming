#include "main.h"

/**
 * string_toupper - changes lowercase characters of a string to uppercase
 * @s: pointer which points to string in main function
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((*(s + i)) >= 'a' && (*(s + i)) <= 'z')
		{
			*(s + i) = *(s + i) - ' ';
		}
	}
	return (s);
}
