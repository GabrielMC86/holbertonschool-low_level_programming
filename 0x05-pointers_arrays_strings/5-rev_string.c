#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string variable
 * Return: void
 */
void rev_string(char *s)
{
	char a;
	int b, c, d;

	b = 0;
	d = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (c = b - 1; c >= b / 2; c--)
	{
		a = s[d];
		s[d] = s[c];
		s[c] = a;
		d++;
	}
}
