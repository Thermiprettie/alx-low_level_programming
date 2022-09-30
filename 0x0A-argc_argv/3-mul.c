#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integers
 * @argc: argument
 * @argv: pointer
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int one1, two2, times;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	one1 = atoi(argv[1]);
	two2 = atoi(argv[2]);
	times = one1 * two2;

	printf("%d\n", times);

	return (0);
}
