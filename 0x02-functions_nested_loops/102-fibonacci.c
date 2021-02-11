#include <stdio.h>
/**
 * main - print fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	int count = 2;
	long int fnext;

	fnext = f1 + f2;
	printf("1, 2, ");

	while (count < 50)
	{
		printf("%li", fnext);
		if (count != 49)
		{
			printf(",");
		}
		f1 = f2;
		f2 = fnext;
		fnext = f1 + f2;
		count++;
	}
	printf("\n");
	return (0);
}
