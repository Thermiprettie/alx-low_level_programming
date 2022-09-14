#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * The numbers must be separated by comma, followed by a space , 
 *
 * Return: 0
 */

int main(void)
{
	int c;
	long int x, y, z;

	x = 1;
	y = 2;
	printf("%ld, %ld", x, y);
	for (c = 0; c < 48; c++)
	{
		z = x + y;
		printf(", %ld", z);
		 x = y;
		 y = z;
	}
	printf("\n");
	return (0);
}
