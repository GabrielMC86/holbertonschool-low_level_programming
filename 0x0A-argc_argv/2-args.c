#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print string arguments
 * @argc: variable counter
 * @argv: pointer variable 
 * Return: string argunents
 */
int main (int argc, char *argv[])
{
	int string;
	(void)argc;
	
	string = 0;

	while (string < argc)
	{
		printf("%s\n", argv[string]);
		string++;
	}
return (0);
}
