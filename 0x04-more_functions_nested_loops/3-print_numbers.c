#include "holberton.h"
/**
 * print_numbers - display numbers 0 -9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
