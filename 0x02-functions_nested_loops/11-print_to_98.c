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

	if (n <= 98)
	{
		for (counter = n; counter <= 98; counter++)
		{
			if (counter == 98)
				printf("%d\n", counter);
			else
				printf("%d, ", counter);
		}
	}
	else
	{
		for (counter = n; counter >= 98; counter--)
		{
			if (counter == 98)
				printf("%d\n", counter);
			else
				printf("%d, ", counter);
		}
	}
}
