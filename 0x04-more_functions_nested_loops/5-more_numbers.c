#include "holberton.h"
/**
 * more_numbers - display 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{

	int row;
	int columns;

	row = 0;

	while (row <= 9)
	{
		columns = 0;
		while (columns <= 14)
		{
			if (columns > 9)
			{
				_putchar((columns / 10) + '0');
				_putchar((columns % 10) + '0');
			}
			else if (columns < 9)
			{
				_putchar(columns + '0');
			}
			columns++;
		}
		row++;
		_putchar('\n');
	}
}
