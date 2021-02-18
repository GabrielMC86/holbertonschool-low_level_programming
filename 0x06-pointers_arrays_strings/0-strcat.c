#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: variable pointer
 * @src: variable pointer
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int dest_len = _strlen(dest);

	for (len = 0; src[len] != '\0'; len++)
		dest[dest_len + len] = src[len];
	dest[dest_len + len] = '\0';

	return (dest);
}
/**
 * _strlen - gives len of string
 * @s: variable pointer
 * Return: len of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
