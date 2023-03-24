
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: 0 null
 */
void print_diagonal(int n)
{
	int times;
	int spaces;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			for (spaces = 0; spaces <= times; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
