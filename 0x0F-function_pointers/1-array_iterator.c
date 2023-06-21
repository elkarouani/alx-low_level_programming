#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: the array to be iterated
 * @size: the size of the array
 * @action: the action wanted to be executed for each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!array || !action)
		return;

	while (i < size)
		action(*(array + i++));
}
