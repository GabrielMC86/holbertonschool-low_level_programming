#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2D grid
 * @grid: dimension of grid
 * @height: number of column to print
 * Return: pointer value of grid
 */
void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}
	free (grid);
}
