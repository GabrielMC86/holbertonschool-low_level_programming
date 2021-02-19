#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: where string is going to be copied
 * @src: string to be copied
 * @n: parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpy;

	for (cpy = 0; cpy < n && src[cpy] != '\0'; cpy++)
		dest[cpy] = src[cpy];
	for ( ; cpy < n; cpy++)
		dest[cpy] = '\0';

	return (dest);
}
