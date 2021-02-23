#include "holberton.h"
/**
 * _strspn - get lenght of prefix string
 * @s: pointer varaible
 * @accept: variable
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int abc;
	int xyz;


	for (abc = 0; s[abc] != '\0'; abc++)
	{
		for (xyz = 0; accept[xyz] != s[abc]; xyz++)
		{
			if (accept[xyz] == '\0')
			{
				return (abc);

			}
		}
	}
return (abc);
}
