#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string that modifies dest
 * @n: paramenter checking len
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int dest_len = _strlen(dest);

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[dest_len + len] = src[len];

	dest[dest_len + len] = '\0';

	return (dest);
}
/**
 * _strlen - gives out lenght of string
 * @s: pointer variable
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
