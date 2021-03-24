#include "lists.h"

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - print before executing the video
 * @constructor: parameter to execute before main
 * Return: 0 on Success
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
