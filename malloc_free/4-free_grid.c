#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - free the 2D array of alloc_grid
* @grid: pointer to the 2D array
* @height: rows of the grid
*
*
*/

void free_grid(int **grid, int height)
{
	int e;

	if (grid == NULL || height <= 0)
	return;

	for (e = 0; e < height; e++)
	free(grid[e]);

	free(grid);
}
