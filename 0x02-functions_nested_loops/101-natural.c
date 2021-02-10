#include<stdio.h>
/**
 * main - sum all natural numbers from multiples 3 or 5
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("d", sum);
	printf("\n");

	return (0);
}
