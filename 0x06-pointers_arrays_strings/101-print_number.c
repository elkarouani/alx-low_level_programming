#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: Null
 */
void print_number(int n)
{
	int digitsCount = 0;
	int nCopy = 0;
	int index;

	nCopy = n;
	if (n < 0)
	{
		_putchar('-');
		nCopy = -nCopy;
	}

	while (nCopy != 0)
	{
		nCopy /= 10;
		digitsCount++;
	}

	for (index = digitsCount; index > 0; index--)
		_putchar(((n / (10 ** index)) % 10) + 48);
}
