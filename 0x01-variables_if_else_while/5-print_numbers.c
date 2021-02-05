#include<stdio.h>
/**
 * main - display numbers from 0-9
 * int: type var used
 * Return: 0
 */
int main(void)
{
	int s;

	s = 0;

	while (s <= 9)
	{
		printf("%d", s);
		s = s + 1;
	}
		printf("\n");
}
