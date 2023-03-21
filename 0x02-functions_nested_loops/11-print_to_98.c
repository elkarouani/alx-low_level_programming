#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start with
 * Return: null
 */
void print_to_98(int n)
{
	int counter;

	for (counter = n; counter <= 98; counter++)
	{
		if (counter >= 10)
			_putchar((counter / 10) % 10 + 48);
		_putchar(counter % 10 + 48);
		if (counter < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
