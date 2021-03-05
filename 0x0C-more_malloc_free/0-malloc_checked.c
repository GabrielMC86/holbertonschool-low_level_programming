#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory string
 * @b: holds memory size
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == 0)
		exit(98);

return (alloc);
}
