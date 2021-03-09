#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer variable
 * @name: pointer variable
 * @age: float variable
 * @owner: char pointer variable
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

		d->name = name;
		d->age = age;
		d->owner = owner;

}
