#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer to know what bit
 * @index: value of bit in @n
 * Return: value of the bit at @index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

return ((n >> index) & 1);
}