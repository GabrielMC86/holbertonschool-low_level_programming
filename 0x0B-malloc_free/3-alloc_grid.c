#include "holberton.h" 
#include <stdlib.h> 
/**
 * **alloc_grid - write a function that returns a pointer to a 2 dimensional array of integers
 * @width: 
 * @height:
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
}
