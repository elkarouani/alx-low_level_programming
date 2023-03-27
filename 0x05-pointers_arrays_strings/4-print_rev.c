#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the characters array to print
 * Return: Null
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
