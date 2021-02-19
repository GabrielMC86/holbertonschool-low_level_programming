#include "holberton.h"
/**
 * reverse_array - function that reverses content of array
 * @a: pointer variable
 * @b: pointer variable 
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int rev;
	int x = 0;
	int y = 0;

	while (a[n] != '\0')
	{
		n++;
	}

	for (rev = n - 1; rev >= n / 2; n--)
	{
		a[n] = a[x];
		a[x] = a[y];
		a[y] = a[n];
		x++;
	}
}
