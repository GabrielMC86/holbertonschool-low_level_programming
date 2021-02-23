#include "holberton.h"
/**
 * print_chessboard - print chessboard
 * @a: pointer variable
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x;
	unsigned int y = 0;

	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
	_putchar('\n');
	y++;
	}
}
