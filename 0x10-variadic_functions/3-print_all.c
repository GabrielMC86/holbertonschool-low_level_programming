#include "variadic_functions.h"
#include <stdio.h>
/**
 * fm_chr - prints char
 * @listado: variable
 */
void fm_chr(va_list listado)
{
	printf("%c", va_arg(listado, int));
}
/**
 * fm_int - prints integers
 * @listado: variable
 */
void fm_int(va_list listado)
{
	printf("%i", va_arg(listado, int));
}
/**
 * fm_flt - prints float
 * @listado: variable
 */
void fm_flt(va_list listado)
{
	printf("%f", va_arg(listado, double));
}
/**
 * fm_str - prints strings
 * @listado: variable;
 */
void fm_str(va_list listado)
{
	char *puntero = va_arg(listado, char *);

	if (puntero == NULL)
	{
		puntero = "(nil)";
	}
	printf("%s", puntero);
}
/**
 * print_all - functions that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list listado;

	fm_t fmto[] = {
		{"c", fm_chr},
		{"i", fm_int},
		{"f", fm_flt},
		{"s", fm_str},
		{NULL, NULL}
	};

	int v;
	int x = 0;
	char *separador = "";

	va_start(listado, format);

	while (format != NULL && format[x] != '\0')
	{
		v = 0;
		while (fmto[v].op != NULL)
		{
			if (format[x] == *(fmto[v].op))
				/*compare index in array to print matching type*/
			{
				printf("%s", separador);
				fmto[v].p(listado);
				/*calling function to print, same as prototype in struct*/
				separador = ", ";
			}
			v++;
		}
		x++;
	}
	printf("\n");
}
