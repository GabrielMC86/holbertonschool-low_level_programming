#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns pointer to a 2-D array of integers
 * @width: number or row to print
 * @height: number of column to print
 * Return: pointer value of grid
 */
int **alloc_grid(int width, int height)
{
	int **dimension;
	int alto, ancho;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimension = malloc(sizeof(int *) * height);

	if (dimension == NULL)
	{
		free(dimension);
		return (NULL);
	}

	for (ancho = 0; ancho < height; ancho++)
	{
		dimension[ancho] = malloc(sizeof(int) * width);

		if (dimension[ancho] == NULL)
		{
			for (alto = ancho; alto >= 0; alto--)
			{
				free(dimension[alto]);
			}

			free(dimension);
			return (NULL);
		}
	}

	for (ancho = 0; ancho < height; ancho++)
	{
		for (alto = 0; alto < width; alto++)
		{
			a[ancho][alto] = 0;
		}
	}

	return (dimension);
}
