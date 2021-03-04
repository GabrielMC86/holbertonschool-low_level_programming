#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns pointer to a 2-D array of integers
 * @width: number or row to print
 * @height: number of column to print
 * return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **dimension;
	int count;
	
	if (width <= 0 || height <= 0)
		return (0);
	
	dimension = malloc(width * sizeof(int *));
	for (count = 0; count < width; count++)
	{
		dimension[count] = malloc(height * sizeof(int));
	}
return (dimension);
free(dimension);
}
