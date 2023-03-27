#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the characters array to print
 * Return: Null
 */
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
		len++;
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
