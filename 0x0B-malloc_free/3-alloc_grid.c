
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int j, k;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		grid[j] = malloc(width * sizeof(**grid));
		if (grid[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
