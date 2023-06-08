#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be calculated
 *
 * Return: the calculation result,
 * or -1 if the number doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion_base(n, 0));
}

/**
 * _sqrt_recursion_base - base recursion logic
 * @n: base number to lookup
 * @i: index to be printed
 *
 * Return: the natural square root or -1
 */
int _sqrt_recursion_base(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt_recursion_base(n, i + 1));
}
