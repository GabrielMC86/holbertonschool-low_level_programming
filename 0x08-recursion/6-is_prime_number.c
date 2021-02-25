#include "holberton.h"
/**
 * is_prime - identify prime numbers
 * @n: integer to be verified
 * Return: 0
 */
int is_prime_number(int n)
{
	int prime = 2;

	if (n % prime == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	else if (n % prime != 0)
	
		return (1);
		return (is_prime_number(n));
}
