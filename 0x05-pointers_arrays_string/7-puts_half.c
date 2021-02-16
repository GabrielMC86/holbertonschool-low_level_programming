#include "holberton.h"
/**
 * puts_half - display half of string
 * @str : pointer variable
 * Return: void
 */
void puts_half(char *str)
{
	int fir, sec = 0;

	while (*(str + fir))
		fir++;

	sec = fir / 2;

	if (fir % 2)
		sec = sec + 1;

	while (sec < fir)
	{
		_putchar(*(str + sec));
		sec++;
	}
	_putchar('\n');
}
