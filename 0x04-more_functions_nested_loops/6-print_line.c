
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: null
 */
void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
			_putchar('_');
	}

	_putchar('\n');
}
