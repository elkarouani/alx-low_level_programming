#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first number to be swaped
 * @b: second number to be swaped
 * Return: Null
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
