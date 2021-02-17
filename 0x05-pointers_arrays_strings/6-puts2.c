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

	while (str[skip] != '\0')
	{
		if (skip % 2 == 0)
		_putchar(*(str + skip));
		skip++;
	}
	_putchar('\n');
}
