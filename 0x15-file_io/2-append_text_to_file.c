#include "holberton.h"
/**
 * append_text_to_file - function that creates adds a line to file
 * @filename: pointer variable to file
 * @text_content: a NULL terminated string dont add to file
 * Return: 1 on sucess, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescript, mask_write, count;

	fdescript = (open(filename, O_WRONLY | O_APPEND));

	if (fdescript == -1)
		return (-1);

	if (text_content == NULL)
	{
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
