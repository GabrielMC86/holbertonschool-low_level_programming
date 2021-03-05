#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - functions that creates an array of integers
 * @min: min value in arrray
 * @max: max value in array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *first;
	int last;
	int diff = 0;

	if (min > max)
		return (0);
	diff = max - min;

	first = malloc(sizeof(int) * (diff + 1));

	if (first == 0)
		return (0);

	for (last = 0; min <= max; last++)
	{
		first[last]  = min;
		min++;
	}
	return (first);
}
