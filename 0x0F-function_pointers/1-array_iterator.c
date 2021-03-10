#include "function_pointers.h"
/**
 * array_iterator - Function that exceutes a function given as a parameter on
 * @array: contains value of to be printed
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Value of array in each element
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (array == 0)
		return;

	if (action == 0)
		return;

	for (num = 0; num < size; num++)
	{
		(*action)(array[num]);

	}
}
