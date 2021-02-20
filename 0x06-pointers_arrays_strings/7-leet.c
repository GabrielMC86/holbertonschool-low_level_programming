#include "holberton.h"
/**
 * char *leet - changes letters for numbers
 * @s: pointer to string array
 * Return: *s
 */
char *leet(char *s)
{
	int zen;
	int idx;
	char alpha[] = {"aeotlAEOTL"};
	char num[] = {"4307143071"};

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (zen = 0; alpha[zen] != '\0'; zen++)
		{
			if (s[idx] == alpha[zen])

			s[idx] = num[zen];
		}
	}
	return (s);
}
