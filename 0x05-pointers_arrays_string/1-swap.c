#include "holberton.h"
/**
 * swap_int - swap values for 2 integers
 * @a: variable
 * @b: variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

