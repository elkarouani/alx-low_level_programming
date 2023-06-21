#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to lookup
 * @size: number of elements in the array
 * @cmp: the function responsible for comparision
 *
 * Return: the index of the passed element in the array, or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}

	return (-1);
}
