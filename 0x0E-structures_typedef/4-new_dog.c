#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function that creates new dog
 * @name: pointer variable char
 * @age: pointer variable float
 * @owner: pointer variable char
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Doggo;
	char *new_name, *new_owner;

	Doggo = malloc(sizeof(dog_t));

	if (Doggo == 0)
		return (NULL);
	Doggo->age = age;

	if (name == 0)
	{
		return (NULL);
	}
	else
	{
		new_name = malloc(_strlen(name) + 1);

		if (new_name == 0)
		{
			free(new_name);
			free(name);
			return (NULL);
		}
		Doggo->name = _strcpy(new_name, name);
	}
	if (owner == 0)
	{
		return (NULL);
	}
	else
	{
		new_owner = malloc(_strlen(owner) + 1);

		if (new_owner == 0)
		{
			free(new_owner);
			free(owner);
			return (NULL);
		}
		Doggo->owner = _strcpy(new_owner, owner);
	}
	return (Doggo);
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
/**
 **_strcpy - copy string
 * @src: variable pointer
 * @dest: variable pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}
