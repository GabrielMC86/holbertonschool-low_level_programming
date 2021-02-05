#include<stdio.h>
/**
 * main - display alphabet two times upper/lower case
 * char: type variable used
 * Return: 0
 */
int main(void)
{
	char alpha, beta;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (beta = 'A'; beta <= 'Z'; beta++)
	{
		putchar(beta);
	}
		putchar('\n');

	return (0);
}
