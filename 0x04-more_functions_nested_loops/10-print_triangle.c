#include "holberton.h"
/**
 * print_triangle - display triangle of # and ' '<space>
 * @size: variable
 * Return: 0
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int x;
		int y;

		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < size - y - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');


}
