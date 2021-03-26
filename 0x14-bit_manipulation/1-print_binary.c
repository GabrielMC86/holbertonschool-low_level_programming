#include "holberton.h"
/**
 * print_binary - Prints binary numbers
 * @n: numbers to be printed in binary
 * Return: binary nuber
 */
void print_binary(unsigned long int n)
{
	unsigned long int num, maske = 1;
	int largo = 0;

	num = n;
	while (num > 0)
	{
		largo++;
		num >>= 1;
	}

	largo -= 1;

	if (largo > 0)
	{
		maske = maske << largo;
	}

	while (maske > 0)
	{
		if (n & maske)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		maske >>= 1;
	}
}

