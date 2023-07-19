#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to lookup
 * @index: index of bit to be 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shifts;

	if (index > 64)
		return (-1);

	for (shifts = 1; index > 0; index--, shifts *= 2)
		;
	*n -= shifts;
	return (1);
}
