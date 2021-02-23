#include "holberton.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer variable
 * @accept: pointer variable
 * Return: set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int idx = 0;
	int zeta = 0;

	while (s[idx] != '\0' && accept[zeta] != '\0')
	{
		if (accept[zeta] == s[idx])
		{
			return (&s[idx - 1]);
		}
		s++;
		accept++;
	}
	return (0);
}

