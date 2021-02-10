#include "holberton.h"
/**
 * print_alphabet - prints alphabet with own header and function
 * int: type var used
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
