#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that  adds positive integers using argc/argv
 * @argc: variable argument count
 * @argv: pointer variable to argument
 * Returns: result from multiplication
 */
int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;
	
	if (argc > 1)
	{	
		for (x = 1; x < argc; x++) 
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{ 
				if (argv[x][y] < '0' || argv[x][y] > '9')
					return (printf("Error\n"), 1);
			}
			sum += atoi(argv[x]);		
		}
	}	
	printf("%d\n", sum);
	return (0);
}
