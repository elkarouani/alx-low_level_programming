#include <sdtlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: the grid to be free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;

	free(grid);
	while (i < height)
		free(*(grid + i++));
}
