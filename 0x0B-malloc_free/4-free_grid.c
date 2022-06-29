#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid:memory block to be freed
 * @height:height of the array
 * Return:returns void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
