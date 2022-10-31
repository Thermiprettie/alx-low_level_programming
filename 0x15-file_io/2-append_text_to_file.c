#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file name
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 or-1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int st8, wrt, st = 0;

	if (filename == NULL)
		return (-1);

	st8 = open(filename, O_RDWR | O_APPEND);
	if (st8 == -1)
		return (-1);



	while (text_content[st])
		st++;

	if (text_content == NULL)
	{
		close(st8);
		return (1);
	}
	else
	{
		wrt = write(st8, text_content, st);
	}

	if (wrt == -1)
		return (-1);

	close(st8);
	return (1);
}
