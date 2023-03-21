#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start with
 * Return: null
 */
void print_to_98(int n)
{
	int counter;

	if (n < 98)
	{
		for (counter = n; counter <= 98; counter++)
		{
			printf("%d", counter);
			if (counter < 98)
				printf(", ");
		}
	}
	else
	{
		for (counter = n; counter >= 98; counter--)
		{
			printf("%d", counter);
			if (counter > 98)
				printf(", ");
		}
	}
	_putchar('\n');
}
