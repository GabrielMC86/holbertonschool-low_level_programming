#include<stdio.h>
/**
 * main - Display numbers 00 - 99 separated by commas and space
 * int: Type var used
 * Return: 0
 */
int main(void)
{
	int up;

	for (up = '0'; up <= '9'; up++)
	{
		putchar(up);
	}
	for (up = '0'; up <= '9'; up++)

		if (up <= '9')
		{
		putchar(',');
		}

		if (up <= '9')
		{
		putchar(' ');
		}
	}
		putchar('\n');

		return (0);
}

