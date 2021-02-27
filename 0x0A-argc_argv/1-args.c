#include "holberton.h"
#include <stdio.h>
/**
 * main - Program that prints outs arguments
 * @argc: counts arguments passed
 * @argv: pointer variable to string
 * Return: integer
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc >= 0)
		printf("%d\n", argc - 1);
return(0);
}
