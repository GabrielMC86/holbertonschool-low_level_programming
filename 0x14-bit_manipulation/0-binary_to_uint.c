#include "holberton.h"
/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: pointer to string
 * Return: b as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow_b, res;
	int largo;

	res = 0;
	largo = 0;
	pow_b = 1;

	if (b == NULL)
		return (0);
	while (b[largo] != '\0')
	{
		largo++;
	}
	largo -= 1;

	while (largo >= 0)
	{
		if (b[largo] != '0' && b[largo] != '1')
			return (0);

		if (b[largo] == '1')
			res += pow_b;

		pow_b = pow_b * 2;

		largo--;
	}
	return (res);
}
