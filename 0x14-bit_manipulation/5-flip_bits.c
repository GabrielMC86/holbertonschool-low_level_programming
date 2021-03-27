#include "holberton.h"
/**
 * flip_bits - function returns number of bits needed to flip one to another
 * @n: integer to be compared
 * @m: integer to be compared
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, count = 0;

	flip = n ^ m;

	while (flip > 0)
	{
		if (flip & 1)
		{
			count++;
		}
		flip >>= 1;
	}
	return (count);
}
