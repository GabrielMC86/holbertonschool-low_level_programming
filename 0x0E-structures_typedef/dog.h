#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines variables of name, owner and age
 * @age: variable interger
 * @name: pointer variable
 * @owner: pointer variable
 * Return: void
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
