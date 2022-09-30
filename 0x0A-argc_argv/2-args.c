#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument
 * @argv: pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sar;

	for (sar = 0; sar < argc; sar++)
		printf("%s\n", argv[sar]);

	return (0);
}
