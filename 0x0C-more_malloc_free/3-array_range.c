#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *range;
	int i = 0;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);

	while (min <= max)
		*(range + i++) = min++;

	return (range);
}
