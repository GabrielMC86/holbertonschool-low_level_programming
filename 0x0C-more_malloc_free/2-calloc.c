#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of memory
 * @size: the size of memory in the array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int arraY;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);

	for (arraY = 0; arraY < (nmemb * size); arraY++)
		ptr[arraY] = 0;

	return (ptr);
}
