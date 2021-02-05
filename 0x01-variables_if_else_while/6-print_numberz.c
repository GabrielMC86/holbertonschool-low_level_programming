#include<stdio.h>
/**
 * main - display numbers from 0-9 using putchar
 * int: type variable use
 * Return: 0
 */
int main(void)
{
	int z;

	z = '0';

	while (z <= '9')
	{
		putchar(z);
		z++;
	}
		putchar('\n');

		return (0);
}
