#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: the number to be calculated
 * @y: the power to be used in the calculation
 *
 * Return: power of the input number result,
 * or -1 if the number is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
