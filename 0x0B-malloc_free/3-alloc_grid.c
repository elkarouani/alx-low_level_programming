#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: the pointer of created grid or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;
	int k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		*(grid + i) = (int *) malloc(sizeof(int) * width);
		if (*(grid + i) == NULL)
		{
			free(grid);
			while (j < height)
				free(*(grid + j++));
			return (NULL);
		}

		while (k < width)
			*(*(grid + i) + k++) = 0;

		i++;
		j = 0;
		k = 0;
	}

	return (grid);
}
