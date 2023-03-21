#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: null
 */
void times_table(void)
{
	int multiplicand;
	int multiplier;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		for (multiplicand = 0; multiplicand <= 9; multiplicand++)
		{
			int product = multiplicand * multiplier;

			if (multiplicand == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				continue;
			}
			if (product < 10)
			{
				_putchar(' ');
				_putchar(multiplicand * multiplier + 48);
				if (multiplicand < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				continue;
			}
			if (product >= 10)
			{
				_putchar((product / 10) % 10 + 48);
				_putchar(product % 10 + 48);
				if (mutliplicand < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				continue;
			}
		}
		_putchar('\n');
	}
}
