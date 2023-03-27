#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the characters array to print
 * Return: Null
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (s[i] != '\0' && i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
