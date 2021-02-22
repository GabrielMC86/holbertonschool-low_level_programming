#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: fills bytes with memory
 * @b: constant byte
 * @n : numbers of bytes to be filled
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index <= n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
