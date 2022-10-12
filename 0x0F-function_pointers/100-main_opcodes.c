#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - function that prints opcodes
 * @argc: argument
 * @argv: array
 * Return: 1 or 2
 */

int main(int argc, char *argv[])
{

	int ind, bytes;
	int (*addy)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (ind = 0; ind <  bytes; ind++)
	{
		opcode = *(unsigned char *)addy;
		printf("%.2x", opcode);

		if (ind == bytes - 1)
			continue;
		printf(" ");
		addy++;
	}
	printf("\n");
	return (0);
}
