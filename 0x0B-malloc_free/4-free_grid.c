#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - fxn frees 2D grid previously created by alloc_grid function
 * @grid: address of the 2-D grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u < height; u++)
	{
		free(grid[u]);
	}

	free(grid);
}
