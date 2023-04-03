#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: String to be lookup
 * @c: the character to locate
 * Return: a pointer to the first occurrence of c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
}
