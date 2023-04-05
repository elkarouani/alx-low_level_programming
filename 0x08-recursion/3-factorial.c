#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Number to be calculated
 * Return: factorial of the requested number
 */
int factorial(int n)
{
	return (n <= 0 ? 1 : n * factorial(n - 1));
}
