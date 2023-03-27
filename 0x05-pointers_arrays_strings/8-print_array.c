#include "main.h"
sh: 1: q: not found

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers to lookup
 * @n: the number of elements of the array to be printed
 * Return: Null
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			print(", %d", a[i]);
	}
	printf("\n");
}
