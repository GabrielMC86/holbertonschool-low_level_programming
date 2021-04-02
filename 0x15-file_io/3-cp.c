#include "holberton.h"
/**
 * error_fd - functioin for switch cases
 * @fd: file descriptor variable
 * @str: pointer to argv
 * @error: list of cases
 * Return: 0 if success, else exit on error
 */

int error_fd(int error, char *str, int fd)
{
switch (error)
	{
	case(97):
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	case(98):
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);

	case(99):
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);

	case(100):
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);

	default:
			return (0);
	}
}
/**
 * main - copy file to another file
 * error_fd: function for switch cases
 * @argc: numbers passed to functions
 * @argv: arguments passed to function
 * Return: 0 SUCCESS, if not exit
 */
int main(int argc, char *argv[])
{
	int Read, Write, copy, paste;
	char *buff[1024];

	if (argc != 3)
		error_fd(97, 0, 0);

	copy = open(argv[1], O_RDONLY);

	if (copy == -1)
		error_fd(98, argv[1], 0);

	paste = (open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664));

	if (paste == -1)
		error_fd(98, argv[2], 0);

	while ((Read = read(copy, buff, 1024)) != 0)
	{
		if (Read == -1)
			error_fd(98, argv[1], 0);
	}

	Write = (write(paste, buff, Read));

	if (Write == -1)
		error_fd(99, argv[2], 0);

	close(copy) == -1 ? (error_fd(100, argv[1], copy)) : close(copy);
	close(paste) == -1 ? (error_fd(100, argv[2], paste)) : close(paste);
	return (0);
}
