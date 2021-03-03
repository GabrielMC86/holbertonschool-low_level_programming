#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
char *create_array(unsigned int size, char c); /*Creates an array of chars*/
char *_strdup(char *str); /*returns a pointer to a new string which is a duplicate of the string str(its parameter*/
char *str_concat(char *s1, char *s2); /*Concatenates two strings*/
int **alloc_grid(int width, int height); /*returns pointer to a 2 dimensional array of integers*/
void free_grid(int **grid, int height); /*frees 2 dimensional grid*/
char *argstostr(int ac, char **av); /*Concatenates all arguments of your program*/
#endif
