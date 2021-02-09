#include "holberton.h"
/**
 * main - print 10x alphabet using own header and function
 * int - type of var used
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i <= 10; i++)
	{

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}

}
