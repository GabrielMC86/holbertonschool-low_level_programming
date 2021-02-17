#include "holberton.h"
/**
 * puts_half - display second part of string
 * @str: string variable
 * Return: void
 */
void puts_half(char *str)
{
	int fir, sec = 0;

	while (*(str + sec))
		sec++;

	fir = sec / 2;
	if (sec % 2)
		fir += 1;

	while (fir < sec)
	{
		_putchar(*(str + fir));
		fir++;
	}
	_putchar('\n');
}
