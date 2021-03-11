#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - functions that returns the sum of all its parameters
 * @n: argument type const int
 * Return: returns sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list suma;
	unsigned int num, add;

	va_start(suma, n); /*Initialize the argument list*/

	add = 0;

	if (n == 0)
		return (0);

	for (num = 0; num < n; num++)
	{
		add = add + va_arg(suma, int);
	}
	va_end(suma);
	return (add);
}
