#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numberz;
	unsigned int a;

	va_start(numberz, n);

	for (a = 0; a < n; a++)
	{
		printf("%i", va_arg(numberz, int));

		if (separator != NULL && a + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numberz);
}
