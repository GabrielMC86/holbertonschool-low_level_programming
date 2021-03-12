#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct formato - name of structure
 * p: name of function pointer
 * @p struct formato: betty angry
 * @op: variable pointer
 */
typedef struct formato
{
	char *op;
	void (*p)(va_list);
} fm_t; /*typedef definition*/


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
