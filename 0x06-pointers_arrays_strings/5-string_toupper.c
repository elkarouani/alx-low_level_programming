#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: String to be converted
 * Return: the converted string
 */
char *string_toupper(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] = s[len] - 'a' + 'A';
	}

	return (s);
}
