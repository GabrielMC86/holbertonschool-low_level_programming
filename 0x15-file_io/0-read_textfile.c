#include "holberton.h"
/**
 * read_textfile - functions that reads a txt file and prints it to stdout
 * @filename: path to file to be read <name>
 * @letters: amount of characters in file
 * Return: 0 if filename is 0 && write fails
 * else return 3
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescrpt;
	char *buff;
	int mask_read;
	int mask_write;

	fdescrpt = ((open(filename, O_RDONLY)));

	if (fdescrpt == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);


	mask_read = read(fdescrpt, buff, letters);

	if (mask_read == -1)
		return (0);

	mask_write = write(STDOUT_FILENO, buff, mask_read);

	if (mask_write == -1)
		return (0);

	close(fdescrpt);
	return (mask_write);
}
