#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: fills bytes with memory
 * @b: constant byte
 * @n : numbers of bytes to be filled
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
