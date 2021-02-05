#include<stdio.h>
/**
 * main - Display numbers 00 - 99 separated by commas and space
 * int: Type var used
 * Return: 0
 */
int main(void)
{
	int up; 

	for (up = '00'; up <= '99'; up++) 
	{
		putchar(up);
	}
		if (up <= '99')
		{
		putchar(',');
		}
		
		if (up <= '99') 
		{
		putchar(' ');
		}
	
		putchar('\n');

}

