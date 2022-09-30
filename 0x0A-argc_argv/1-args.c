#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it
 * 		followed by a new line
 * @argc: argument
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
