#include<stdio.h>
/**
 * main - display alphabet in reverse
 * char: type variable used
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
		putchar('\n');

	return (0);
}
