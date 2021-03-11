#include "3-calc.h"

int op_add(int a, int b) /*returns the sum of a and b*/
{
	 return (a + b);
}
int op_sub(int a, int b) /*returns the subtraction of a and b*/
{
	return (a - b);
}
int op_mul(int a, int b) /*returns the multiplication of a and b*/
{
	return (a * b);
}
int op_div(int a, int b) /*returns the result of division of a and b*/
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
int op_mod(int a, int b) /*returns the remainder of the division of a and b*/
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
