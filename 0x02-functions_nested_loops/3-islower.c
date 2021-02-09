#include "holberton.h"
/**
 * main - confirm if character is lowercase
 * int: type var used
 * Return: 0
 */
int _islower(int c)
{
		
	if (c == 97 && c < 123)
	{
		 _putchar('1');
	}
	else 
	{
		_putchar('0');
	}
	
return (0);
}
