#include "holberton.h"
/**
 * string_toupper - turn lowercase letters to uppercase
 * Return: char
 */
char *string_toupper(char *)
{
	char str[];
	int idx;
	int idx_len = _strlen(idx);

	for (idx = 0; str[idx] != 0; idx++)
	{
		str[idx] = *;
		idx[idx_len + str] = '\0'  
	}

return (0);
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
