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
	unsigned int lenght;
	unsigned int lenght2;
	unsigned int ctr;

	if (s1 == 0)
		s1 = NULL;
	else
		for (lenght = 0; s1[lenght] != '\0'; lenght++)
			;

	if (s2 == 0)
		s2 = NULL;
	else
		for (lenght2 = 0; s2[lenght2] != '\0'; lenght2++)
			;

	if (lenght2 > n)
		lenght2 = n;

	new_str = malloc(sizeof(char) * (lenght + lenght2 + 1));

	if (new_str == NULL)
		return (0);

	for (ctr = 0; ctr < lenght; ctr++)
		new_str[ctr] = s1[ctr];

	for (ctr = 0; ctr < lenght2; ctr++)
		new_str[ctr + lenght] = s2[ctr];

	new_str[lenght + lenght2] = '\0';
	return (new_str);
}
