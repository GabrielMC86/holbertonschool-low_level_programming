#include "holberton.h"

/**
 * times_table - print the 9 times table, starting with 0
 * int: type var
 * Return: void
 */

void times_table(void)
{
	int l;
	int r;
	int mult;

	for (l = 0; l < 10; l++)
	{
		for (r = 0; r < 10; r++)
		{
			if (r == 0)
			{
				_putchar(48);
				continue;
			}
			mult = l * r;
			_putchar(',');
			_putchar(' ');

			if (mult >= 10)
			{
				_putchar(mult / 10 + 48);
				_putchar(mult % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(mult + 48);
			}
		}
		_putchar('\n');
	}
}
