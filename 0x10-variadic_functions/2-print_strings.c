#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings, followed by new line
 * @separator: string to be printed
 * @n: number of strings passed to functions
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list line;
	unsigned int str;
	char *ptr;

	va_start(line, n);

	for (str = 0; str < n; str++)
	{
		ptr = va_arg(line, char*);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		printf("%s", ptr);

		if (separator != 0 && str + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(line);
}
