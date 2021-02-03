#include<stdio>
/**
 * main: Program that prints size of various types
 * @sizeof: prints size of types
 * Return : Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long y;
	float f;

	printf("Size of a char: %zu bytes(s)\n", c);
	printf("Size of an int: %zu bytes(s)\n", i);
	printf("Size of a long int: %zu bytes(s)\n", l);
	printf("Size of a long long int: %zu bytes(s)\n", y);
	printf("Size of a float: %zu bytes(s)\n", f);

	return (0);
}
