#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: the number to lookup
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_base(n, n - 1));
}

/**
 * is_prime_number_base - base recursion logic
 * @n: the number to lookup
 * @i: index to be returned
 *
 * Return: 1 or 0
 */
int is_prime_number_base(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_number_base(n, i - 1));
}
