#include "holberton.h"
/**
 * _isdigit - checks digit from 0 - 9
 * int: variable 
 * Return: 1 if success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	
		return (1);
	else
		return (0);
}
