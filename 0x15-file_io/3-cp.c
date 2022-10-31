#include "main.h"

/**
 * create_buffer - allocate bytes
 * @file: file for storing chars
 * Return: pointer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - close a file
 * @fd: file descriptor
 * Return: Null
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy file
 * @argc: arg
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cp_frm, cp_to, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	cp_frm = open(argv[1], O_RDONLY);
	rd = read(cp_frm, buff, 1024);
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (cp_frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(cp_to, buff, rd);
		if (cp_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(cp_frm, buff, 1024);
		cp_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buff);
	close_file(cp_frm)
		close_file(cp_to);
	return (0);
}
