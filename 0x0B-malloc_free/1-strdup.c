#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string 
 * @str: pointer to string 
 * return: a pointer 
 */
char *_strdup(char *str)
{
	char *ch;
	int x;

	if (str == 0) 
	{
		return (0);
	}
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	ch = malloc(x * sizeof(char) + 1);

	if (ch == 0)  
	{
		return (0);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		ch[x] = str[x];
	}
	return (ch);
	free (ch);
}
