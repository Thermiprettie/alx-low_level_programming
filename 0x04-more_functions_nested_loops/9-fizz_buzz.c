#include "main.h"
#include <stdio.h>

/**
 * main - print the numbersfrom 1 to 100
 * followed by a new line
 * print 'Fizz' for multiples of three
 * and print Buzz for the multiples of five
 * FizzBuzz should be printed for multiples of both three and five
 * separate each number or word should be separated by a space
 * Return: numbers
 */

int main(int)
{
	int s;

	for (s = 1; s <= 100; s++)
	{
		if ((s % 3) == 0 && (s % 5) == 0)
			printf("FizzBuzz");

		else if ((s % 3) == 0)
			printf("Fizz");

		else if ((s % 5) == 0)
			printf("Buzz");

		else
			printf("%d", s);

		if (s == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
