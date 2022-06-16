#include "main.h"

/**
 * free_grid - Task 4
 *
 * @grid: 2d array being passed to function
 * @height: number of rows to be freed from grid
 *
 * Return: NULL on failure
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
