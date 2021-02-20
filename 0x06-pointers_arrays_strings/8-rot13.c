#include "holberton.h"
/**
 * rot13 - rotates letters
 * @s: pointer string
 * Return: s
 */
char *rot13(char *s)
{

	int zen;
	int idx;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char num[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (zen = 0; alpha[zen] != '\0'; zen++)
		{
			if (s[idx] == alpha[zen])
			{
				s[idx] = num[zen];
				break;
			}
		}

	}
	return (s);

}
