#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the characters array to reverse
 * Return: Null
 */
void rev_string(char *s)
{
	char oppositeChar;
	int i = 0;
	int len = 0;
	int len1 = 0;

	while (s[len] != '\0')
		len++;
	len1 = len - 1;
	for (i = 0; i <= len / 2 ; i++)
	{
		oppositeChar = s[i];
		s[i] = s[len1];
		s[len1--] = oppositeChar;
	}
}
