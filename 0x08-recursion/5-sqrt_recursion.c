#include "holberton.h"
/**
 * _sqrt_recursion - functions that returns natural square root of a number
 * @n: number to find square root
 * Return: square root number
 */
int _sqrt_recursion(int n)
{
	int alpha = 0;

	if (n < 0)
	{
		return (-1);
	}

return (_calc_square(alpha, n));
}
int _calc_square(int alpha, int n)
{
	if (alpha * alpha == n)
	{
		return (alpha);
	}
	else if (alpha * alpha > n)
	{
		return (-1);
	}
	return (_calc_square(alpha + 1, n));
}
