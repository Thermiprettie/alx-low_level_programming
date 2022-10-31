#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters to read and print
 * Return: 0 or actual numbers of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(0);

	return (wrt);
}
