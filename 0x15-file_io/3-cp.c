#include "holberton.h"


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
	int Read, Write, _1_cp, _2_paste;
	char *buff[1024];

	if (argc != 3)
		error_fd(97, 0, 0);

	_1_cp = (open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664));
	error_fd(99, argv[2], 0);

	if (_1_cp == -1)
		error_fd(98, argv[2], 0);

	_2_paste = open(argv[1], O_RDONLY);

	if (_2_paste == -1)
		error_fd(98, argv[2], 0);

	while ((Read = read(_1_cp, buff, 1024)) != 0)
	{
		if (Read == -1)
			error_fd(98, argv[1], 0);
	}

	Write = (write(_2_paste, buff, Read));

	if (Write == -1)
		error_fd(99, argv[2], 0);

	close(_1_cp) == -1 ? (error_fd(100, argv[1], _1_cp)) : close(_1_cp);
	close(_2_paste) == -1 ? (error_fd(100, argv[2], _2_paste)) : close(_2_paste);
	return (0);
}
