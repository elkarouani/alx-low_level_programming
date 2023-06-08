#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate its factorial
 *
 * Return: factorial of the input number,
 * or -1 if the number is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
