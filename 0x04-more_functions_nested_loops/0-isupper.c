#include "holberton.h"
/**
 * _isupper - checks for upper case letters
 * @c: variable
 * Return: 1 always success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
