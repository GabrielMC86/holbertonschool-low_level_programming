#include "holberton.h"
/**
 * puts2 - display every other character
 * @str: variable to be displayed
 * Return: 0
 */
void puts2(char *str)
{
	int skip;

	skip = 0;

	while (*(str + 1))
	{
		_putchar(*(str + skip));
		skip += 2;
	}

	_putchar('\n');
}
