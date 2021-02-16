#include "holberton.h"
/**
 * puts2 - print out every other character
 * @str: pointer variable
 * Return: void
 */
void puts2(char *str)
{
	int sk = 0;

	while (*(str + 1))
	{
		_putchar(*(str + sk));
		sk = sk + 1;
	}
	_putchar('\n');
}
