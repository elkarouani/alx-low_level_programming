#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the characters array to print
 * Return: Null
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int halflen = 0;

	while (str[len] != '\0')
		len++;
	
	halflen = (len % 2) == 0 ? len / 2 : (len - 1) / 2
	for (i = (len - halflen); i >= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
