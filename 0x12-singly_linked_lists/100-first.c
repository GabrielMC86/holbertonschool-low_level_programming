#include "lists.h"

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - print before executing the main function
 * Return: Void
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
