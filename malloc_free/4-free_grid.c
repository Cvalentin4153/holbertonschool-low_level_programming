#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2-dimensional grid previously created by alloc_grid
 * @grid: the grid to free
 * @height: height of the grid (number of rows)
 *
 * Description: Frees the memory allocated for a 2D grid of integers.
 * It first frees each row of the grid and then frees the grid itself.
 * The function does nothing if grid is NULL or if height is zero or negative.
 */
void free_grid(int **grid, int height)
{
int i;

	if (grid == NULL)
	{
		return;
	}
	if (height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
		free(grid[i]);
		}
	}
	free(grid);
}
