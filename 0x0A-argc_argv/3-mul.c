#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - promgram that multiplies two integers using argc/argv
 * @argc: variable argument count
 * @argv: pointer variable to argument
 * Returns: result from multiplication
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	int result;

	if (argc > 1)
	{
			for (result = 0; result < argc; argv[result]++);
			{
				mul = mul * atoi(argv[result]);
				printf("%d\n", mul); 
			}
	}		
	else if (argc < 1)
	{
			printf("Error\n");
			return (1);
	}
return (0);
}
