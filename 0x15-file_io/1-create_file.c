#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: pointer variable to file
 * @text_content: a NULL terminated string to write to file
 * Return: 1 on sucess, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fdescript, mask_write, count;

	fdescript = (open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600));

	if (fdescript == -1)
		return (-1);

	if (text_content == NULL)
	{

		fdescript = (open(filename, O_CREAT, 0600));
		if (fdescript == -1)
			return (-1);

	return (1);
	}

	for (count = 0; text_content[count] != '\0'; count++)
		;

	mask_write = write(fdescript, text_content, count);

	if (mask_write == -1)
		return (-1);

	close(fdescript);
	return (1);
}
