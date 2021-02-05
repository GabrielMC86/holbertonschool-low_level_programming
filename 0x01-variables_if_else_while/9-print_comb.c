#include<stdio.h>
/**
 * main - display numbers separated by commas and space
 * int: type variable used
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);

		if (a < '9')
		{
		putchar(',');
		}

		if (a < '9')
		{
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
