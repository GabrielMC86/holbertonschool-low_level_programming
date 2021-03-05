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
	unsigned int length = _strlen(s1);
	unsigned int length2 = _strlen(s2);
	unsigned int ctr, ctr2, length3;


	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";


	if (n >= length2)
		n = length2;
	
	length3 = length + n;

	new_str = malloc(sizeof(char) * length3 + 1);

	if (new_str == 0)
		return (NULL);

	for (ctr = 0; ctr < length; ctr++)
		new_str[ctr] = s1[ctr];

	for (ctr2 = 0; ctr2 < n; ctr2++)
		new_str[ctr2 + length] = s2[ctr2];

	new_str[length + n] = '\0';
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
