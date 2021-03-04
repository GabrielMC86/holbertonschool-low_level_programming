#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: is the size of the array
 * @c: the specific character
 * Return: a pointer or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *aray;
	unsigned int index;

	if (size == 0)
	{
		return (0);
	}
	aray = malloc(sizeof(*aray) * size);

	if (aray == 0)
	{
		return (0);
	}
	else
	{
		index = 0;

		while (index < size)
		{
		aray[index] = c;
		index++;
		}
		aray[index] = '\0';
	}
return (aray);
free(aray);
}
