#include "holberton.h"
/**
 * _puts_recursion - prints string using recusion function
 * @s: pointer variable to string
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
