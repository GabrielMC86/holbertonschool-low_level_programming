#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings using malloc
 * @s1: dest string
 * @s2: source string
 * Return: pointer to new string with added s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int lenght, lenght_2, sum_lenghts, final_str, final_str2;
	char *new_str;

	if (s1 == '\0')
		return ("");
	if (s2 == '\0')
		return ("");

	for (lenght = 0; s1[lenght] != '\0'; lenght++)
		;

	for (lenght_2 = 0; s2[lenght_2] != '\0'; lenght_2++)
		;

	sum_lenghts = ((lenght + lenght_2) + 1);
	new_str = malloc(sum_lenghts * sizeof(char));

	if (new_str == '\0')
		return (0);

	for (final_str = 0; final_str < lenght; final_str++)
	{
		new_str[final_str] = s1[final_str];
	}
	for (final_str2 = 0; final_str2 < lenght_2; final_str2++)
	{
		new_str[final_str] = s2[final_str2];
		final_str++;
	}
	new_str[final_str] = '\0';
	return (new_str);
}
