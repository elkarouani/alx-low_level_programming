#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_temp;
	int shifts;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (n_temp = n, shifts = 0; (n_temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
		_putchar(((n >> shifts) & 1) ? '1' : '0');
}
