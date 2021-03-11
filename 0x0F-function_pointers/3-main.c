#include "3-calc.h"
/**
 * main - functions that returns result of arithmetic operation
 *
 * Return: 
 */
int main(int argc, char *argv[])
{
	int num_1, num_2;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	/* Arguments(strings) entered by user convert them to int with atoi*/
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	
	printf("%d\n", get_op_func(argv[2])(num_1, num_2));
	
return (0);
}
