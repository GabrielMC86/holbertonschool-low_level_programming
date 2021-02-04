#include<stdio.h>

/**
 * main - display alphabet in lower case
 * char: type variable use
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');

	return (0);
}
