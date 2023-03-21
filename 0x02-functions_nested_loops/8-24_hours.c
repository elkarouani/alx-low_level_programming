#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: null
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
				_putchar('0');
			else
				_putchar((hours / 10) % 10 + 48);
			_putchar(hours % 10 + 48);
			_putchar(':');
			if (minutes < 10)
				_putchar('0');
			else
				_putchar((minutes / 10) % 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
		}
	}
}
