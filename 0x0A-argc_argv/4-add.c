#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument
 * @argv: pointer
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num, num1, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (num1 = 0; argv[num][num1]; num1++)
		{
			if (argv[num][num1] < '0' || argv[num][num1] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
