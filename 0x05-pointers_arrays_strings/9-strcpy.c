#include "holberton.h"
/**
 **_strcpy - copy string
 * @src: variable pointer
 * @dest: variable pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + 1))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + 1) = '\0';
return (dest);
}
