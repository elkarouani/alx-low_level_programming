#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: String to be converted
 * Return: the converted string
 */
char *cap_string(char *s)
{
	int len = 0;
	int canBeConverted = 0;

	while (s[len] != '\0')
	{
		if (canBeConverted == 1 && s[len] >= 'a' && s[len] <= 'z')
		{
			s[len] = s[len] - 'a' + 'A';
			canBeConverted = 0;
		}
		if (s[len] == ' ')
			canBeConverted = 1;
		len++;
	}

	return (s);
}
