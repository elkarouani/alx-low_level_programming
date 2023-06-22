#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments passed to the function
 *
 * Return: the sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argv;

	va_start(argv, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argv, int);

	va_end(argv);
	return (sum);
}
