#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int cr8, st = 0;

	if (filename == NULL)
		return (-1);

	cr8 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (cr8 == -1)
		return (-1);

	while (text_content[st])
		st++;

	if (text_content == NULL)
	{
		close(cr8);
		return (-1);
	}
	else
	{
		write(cr8, text_content, st);
	}

	close(cr8);
	return (1);
}
