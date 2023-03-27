#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the characters array to reverse
 * Return: Null
 */
void rev_string(char *s)
{
	char reversed[];
	int i = 0;
	int j = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		reversed[j] = s[i];
		j++;
	}
	*s = reversed;
}
