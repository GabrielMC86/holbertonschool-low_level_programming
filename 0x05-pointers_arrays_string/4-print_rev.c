#include "holberton.h"
/**
 * print_rev - print in reverse string
 * @s: variable pointer
 * Return: void
 */
void print_rev(char *s)
{
	int str;

	for (str = 0; *(s + str); str++)
		;
	--str;

	while (str >= 0)
	{
		_putchar(*(s + str));
		--str;
	}
	_putchar('\n');
}
