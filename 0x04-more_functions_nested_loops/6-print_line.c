#include "holberton.h"
/**
 * print_line - display line on terminal
 * @n: variable
 * Return: void
 */
void print_line(int n)
{
	int line;

	line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
