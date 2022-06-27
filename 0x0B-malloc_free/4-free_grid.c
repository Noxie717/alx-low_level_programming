#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
		free(grid[g]);
	free(grid);
}
