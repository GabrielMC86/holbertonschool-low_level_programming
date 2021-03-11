#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t; 

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b); /*returns the sum of a and b*/
int op_sub(int a, int b); /*returns the subtraction of a and b*/
int op_mul(int a, int b); /*returns the multiplication of a and b*/
int op_div(int a, int b); /*returns the result of division of a and b*/
int op_mod(int a, int b); /*returns the remainder of the division of a and b*/

#endif
