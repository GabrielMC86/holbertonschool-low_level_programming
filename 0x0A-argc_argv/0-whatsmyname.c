#include <stdio.h>
/**
 * main - print program name
 * @argc: counter variable not used
 * @argv: pointer variable to argument
 * Return: argument passed to progam
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);

return (0);
}
