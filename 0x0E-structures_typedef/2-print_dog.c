#include "dog.h"
#include <stdio.h>
/**
 * print_dog - functions that prints struct dog
 * @d: Struct with values of variables
 * Return: 0 on Success
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		d->name == 0 ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		d->age == 0 ? printf("(nil)\n") : printf("Age: %f\n", d->age);
		d->owner == 0 ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
	else
		return;

}
