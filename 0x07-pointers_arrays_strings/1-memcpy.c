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
