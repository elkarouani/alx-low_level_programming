#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: String to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int index;
	int len = 0;
	char *code = "aAeEoOtTlL";
	char *encode = "4433007711";

	while (s[len] != '\0')
	{
		for (index = 0; index < 10; index++)
		{
			if (s[len] == code[index])
				s[len] = encode[index];
		}
		len++;
	}

	return (s);
}
