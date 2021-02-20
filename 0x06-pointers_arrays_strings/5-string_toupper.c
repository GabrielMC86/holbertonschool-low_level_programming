#include "holberton.h"
/**
 * string_toupper - turn lowercase letters to uppercase
 * @str: pointer to string
 * Return: char
 */
char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] >= 97 && str[idx] <= 122)
			str[idx] = str[idx] - 32;
	}

return (str);
}
