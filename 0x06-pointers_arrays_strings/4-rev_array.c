#include "holberton.h"
/**
 * reverse_array - function that reverses content of array
 * @a: pointer variable
 * @n: elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int temp = 0;
	int x = 0;

	n = n - 1;

	while (x <= n)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
		n--;
	}
}
