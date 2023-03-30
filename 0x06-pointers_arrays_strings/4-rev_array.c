#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements of the array
 * Return: Null
 */
void reverse_array(int *a, int n)
{
	int index;
	int tmp;

	for (index = 0; index < (n / 2); index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}
