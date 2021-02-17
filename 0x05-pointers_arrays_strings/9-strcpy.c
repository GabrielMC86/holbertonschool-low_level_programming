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

	while (*(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
return (dest);
}
