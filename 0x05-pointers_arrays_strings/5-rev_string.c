#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string variable
 * Return: void
 */
void rev_string(char *s)
{

	while ( *s != '\0')
	{
		_putchar(*s);
		s++;
	
	--s;
		if (s != '\0')
		
			_putchar(*s);
			s--;	
	
	}
}
