#include "holberton.h"
/**
 * _puts - display string at stdout
 * @str: variable pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
