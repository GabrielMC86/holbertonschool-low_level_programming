#include "holberton.h"
/**
 * _abs - display the absolute value of the integer
 * 
 * Return: 0
 */
int _abs(int n)
{
	if (n >=0)
		return (n);

	else 
	{
		n *= -1;
		return (n);
	 
	}
}
