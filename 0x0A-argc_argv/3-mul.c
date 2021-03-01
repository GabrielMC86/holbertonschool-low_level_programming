#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - promgram that multiplies two integers using argc/argv
 * @argc: variable argument count
 * @argv: pointer variable to argument
 * Return: result from multiplication
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
