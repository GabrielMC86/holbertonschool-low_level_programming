#include "holberton.h"
/**
 * print_alphabet_x10 - display alphabet using own header and function
 * int - type of var used
 * Return: void
 */
void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i <= 9; i++)
	{

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}

}
