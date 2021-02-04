#include<stdio.h>
/**
 * main - function that prints size of various types
 * Return : 0
 */
int main(void)
{
char c;
int i;
long int l;
long long int y;
float f;
printf("Size of a char: %zu bytes(s)\n", sizeof(c));
printf("Size of an int: %zu bytes(s)\n", sizeof(i));
printf("Size of a long int: %zu bytes(s)\n", sizeof(l));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(y));
printf("Size of a float: %zu bytes(s)\n", sizeof(f));
return (0);
}
