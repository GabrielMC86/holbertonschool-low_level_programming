#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: string to be compared to s1
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

return (*s1 - *s2);
}
