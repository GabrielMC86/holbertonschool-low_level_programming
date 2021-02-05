#include<stdio.h>
/**
 * main - Display numbers 00 - 99 separated by commas and space
 * int: Type var used
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i <= 98)
		{
		putchar(',');
		}
		if (i <= 98)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
