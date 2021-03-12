#include "3-calc.h"
/**
 * op_add - adds number
 * @a: integer
 * @b: integer
 * Return: results of sum between a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of integers a and b
 * @a: integer
 * @b: integer
 * Return: result of subtraction from a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: integer
 * @b: integer
 * Return: result of subtraction from a - b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: integer
 * @b: integer
 * Return: result of division from a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - searches for remainder of integers
 * @a: integer
 * @b: integer
 * Return: result of modulo from a % b
 */
int op_mod(int a, int b) /*returns the remainder of the division of a and b*/
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
