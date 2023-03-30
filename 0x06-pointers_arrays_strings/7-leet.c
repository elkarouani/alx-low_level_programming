#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: String to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{

		if (s[len] == 'a' || s[len] == 'A')
			s[len] = 52;
		if (s[len] == 'e' || s[len] == 'E')
			s[len] = 51;
		if (s[len] == 'o' || s[len] == 'O')
			s[len] = 48;
		if (s[len] == 't' || s[len] == 'T')
			s[len] = 55;
		if (s[len] == 'l' || s[len] == 'L')
			s[len] = 49;
	}

	return (s);
}
