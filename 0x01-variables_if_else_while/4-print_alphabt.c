#include<stdio.h>
/**
 * main - display alphabet without e and q
 * char: type variable use
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}


