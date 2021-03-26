#include "holberton.h"
/**
 * clear_bit - function that sets value of a bit to 0 at a given index
 * @n: pointer variable at int
 * @index: integer to be evaluated
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (n == NULL || index > 32)
		return (-1);

	num = num << index;

	if ((num & *n) == num)
	{
		*n -= num;
	}
return (1);
}
