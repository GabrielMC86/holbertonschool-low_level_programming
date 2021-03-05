#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _realloc - function that reallocates a memory block using
 * @ptr: pointer to a previously allocated memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 * Return: new pointer to newly reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;     

	if (new_size == old_size)
		return (ptr);

	if  (ptr == '\0')
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	if  (new_size == 0 && ptr != '\0') 
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	_memcpy(ptr2, ptr, old_size);

	free (ptr);
	return (ptr2);
}

#include "holberton.h"
/**
 * _memcpy - copies memory with a constant byte
 * @n: number of memory to be copy
 * @dest: where memory is to be allocated
 * @src: pointer where mem to be copied
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
