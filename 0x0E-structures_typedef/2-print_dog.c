#include "dog.h"
#include <stdio.h>
/**
 * print_dog - functions that prints struct dog
 * @dog: Struct with values of variables
 * Return: 0 on Success
 */
void print_dog(struct dog *d)
{
	d->name == 0 ? printf("Name: (nil)\n") : printf("%s\n", d->name);
	d->age == 0 ? printf("(nil)\n") : printf("%f\n", d->age);
	d->owner == 0 ? printf("(nil)\n") : printf("%s\n", d->owner);
}
