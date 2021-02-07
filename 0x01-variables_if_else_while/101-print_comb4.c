#include<stdio.h>
/**
 * main - display 3 digits in ascending order, no combination
 * int: type var used 
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if ( a <= '6')
				{
					putchar(',');
					putchar(' ');
				}

			}	
		}
	}	
	putchar('\n');
	return (0);
}
