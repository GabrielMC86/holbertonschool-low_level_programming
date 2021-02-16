#include "holberton.h"
#include <stdio.h>
/**
 * print_array - display 'n' elements of array, interger
 * @n: variable
 * @a: pointer variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
			printf(", ");
		x++;
	}
	printf("\n");
}
