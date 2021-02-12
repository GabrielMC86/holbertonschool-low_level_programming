#include "holberton.h"
/**
 * print_most_numbers - display 0 - 9 != 2, 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int nux = '0';

	do {
		if (nux == '2')
		{
			nux = nux + 1;
			continue;
		}
		else if (nux == '4')
		{
			nux = nux + 1;
			continue;
		}
		else
		{	_putchar(nux);
			nux++;
		}
	} while (nux <= '9');
	_putchar('\n');
}
