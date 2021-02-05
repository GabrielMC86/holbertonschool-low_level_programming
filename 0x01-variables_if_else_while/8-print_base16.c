#include<stdio.h>
/**
 * main - display all numbers of base 16
 * int: type variable used
 * Return: 0
 */
int main(void)
{
	int h, x;

	h = '0';
	x = 'a';

	do {
		putchar(h);
		h++;

	} while (h <= '9');

	do {
		putchar(x);
		x++;

	} while (x <= 'f');

	putchar('\n');

	return (0);
}
