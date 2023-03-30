#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: String to be converted
 * Return: the converted string
 */
char *cap_string(char *s)
{
	int index;
	int len = 0;
	int canBeConverted = 1;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (s[len] != '\0')
	{
		if (canBeConverted == 1 && s[len] >= 'a' && s[len] <= 'z')
			s[len] = s[len] - 'a' + 'A';
		canBeConverted = 0;
		for (index = 0; index < 13; index++)
		{
			if (s[len] == separators[index])
				canBeConverted = 1;
		}

		len++;
	}

	return (s);
}
