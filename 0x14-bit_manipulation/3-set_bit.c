#include "holberton.h"
/**
 * set_bit - function that sets value of a bit to 1 at a given index
 * @n: pointer variable at int
 * @index: integer to be evaluated
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > 32)
		return (-1);

	num = num << index;
	*n = *n | num;

return (1);
}
