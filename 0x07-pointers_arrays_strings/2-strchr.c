#include "holberton.h"
/**
 * _strchr - locate character in a string
 * @s: pointer returning char
 * @c: char variable
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
	int idx = 0;

	while (s[idx] != '\0' && s[idx] != c)
	{
		s++;
	}
		if (*s == c)
		{
			return (&s[idx]);
		}
		else
			return ('\0');
}
