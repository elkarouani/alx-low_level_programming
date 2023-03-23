
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: null
 */
void more_numbers(void)
{
	int number, times;

	for (times = 0; times < 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				_putchar(((number / 10) % 10) + 48);
			_putchar((number % 10) + 48);
		}
	}

	_putchar('\n');
}
