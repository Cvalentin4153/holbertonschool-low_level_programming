#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: width of the grid (number of columns)
 * @height: height of the grid (number of rows)
 *
 * Description: Allocates memory for a 2D grid of integers,
 * initializes all elements to 0.
 * If width or height is 0 or negative,
 * returns NULL. Handles memory allocation failures.
 *
 * Return: pointer to the 2D array, or NULL if failure occurs
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
	}
return (grid);
}
