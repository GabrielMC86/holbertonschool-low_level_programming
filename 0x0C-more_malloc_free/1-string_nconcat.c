#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings using malloc
 * @s1: dest string pointer
 * @s2: source string pointer
 * @n: limit bytes of s2 to passed to s1
 * Return: pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int lenght = _strlen(s1);
	unsigned int lenght2 = _strlen(s2);
	unsigned int ctr, ctr2;


	if (s1 == 0)
		s1 = NULL;

	if (s2 == 0)
		s2 = NULL;

	
	if (n >= lenght2)
		
		n = lenght2; 	

	new_str = malloc(sizeof(char) * (lenght + n + 1));

	if (new_str == 0)
		return (NULL);

	for (ctr = 0; ctr < lenght; ctr++)
		new_str[ctr] = s1[ctr];

	for (ctr2 = 0; ctr2 < n; ctr2++)
		new_str[ctr2 + lenght] = s2[ctr2];

	new_str[lenght + n] = '\0';
	return (new_str);
}

/**
 * _strlen - gives out lenght of string
 * @s: pointer variable
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
