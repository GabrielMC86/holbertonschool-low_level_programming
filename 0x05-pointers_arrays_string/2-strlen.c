#include "holberton.h"
/**
 * _strlen - gives out the lenght of string
 * @s: variable
 * Return: 0
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
