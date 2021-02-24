#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagonal
 * @a: pointer variable
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int idx;
	int add = 0;

	for (idx = 0; idx < (size * size); idx += size + 1)
	{
		add += a[idx];
	}
	printf("%d, ", add);
	add = 0;
	for (idx = size - 1; idx < (size * size - 1); idx += size - 1)
	{
		add += a[idx];
	}
	printf("%d\n", add);
}
