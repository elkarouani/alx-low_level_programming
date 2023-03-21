#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to end the table with
 * Return: null
 */
void print_times_table(int n)
{
	int multiplicand;
	int multiplier;

	if (n > 15 || n < 0)
		return;

	for (multiplier = 0; multiplier <= n; multiplier++)
	{
		for (multiplicand = 0; multiplicand <= n; multiplicand++)
		{
			int product = multiplicand * multiplier;

			if (multiplicand == 0)
				_putchar('0');
			if (multiplicand != 0 && product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplicand * multiplier + 48);
			}
			if (multiplicand != 0 && product >= 10 && product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) % 10 + 48);
				_putchar(product % 10 + 48);
			}
			if (multiplicand != 0 && product >= 100)
			{
				_putchar(product / 10 + 48);
				_putchar((product / 10) % 10 + 48);
				_putchar(product % 10 + 48);
			}
			if (multiplicand < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
