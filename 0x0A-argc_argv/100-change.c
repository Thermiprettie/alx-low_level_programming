#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change for an amount of money
 * @argc: argument
 * @argv: pointer
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int naira, penny = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	naira = atoi(argv[1]);

	while (naira > 0)
	{
		penny++;
		if ((naira - 25) >= 0)
		{
			naira -= 25;
			continue;
		}
		if ((naira - 10) >= 0)
		{
			naira -= 10;
			continue;
		}
		if ((naira - 5) >= 0)
		{
			naira -= 2;
			continue;
		}
		naira--;
	}

	printf("%d\n", penny);

	return (0);
}
