#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: String to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int index;
	int len = 0;
	char *code = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[len] != '\0')
	{
		for (index = 0; index < 52; index++)
		{
			if (s[len] == code[index])
				s[len] = encode[index];
		}
		len++;
	}

	return (s);
}
