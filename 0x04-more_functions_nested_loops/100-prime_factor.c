#include <stdio.h>
/**
 * main - print largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long big = 612852475143;
	long fact;

	for (fact = 2; fact <= big; fact++)
	{
		if (big % fact == 0)
		{
			big = big / fact;
			fact--;
		}
	}
	printf("%ld\n", fact);
return (0);
}
