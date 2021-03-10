#include "function_pointers.h"
/**
 * print_name - Write a functions that prints a name
 * @name: pointer variable to name
 * @f: pointer to another function
 * Return: function with name printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
		return;

	(*f)(name);

}
