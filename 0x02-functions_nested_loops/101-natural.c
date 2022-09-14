#include <stdio.h>

/**
 * main - a program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line
 * if all natural numbers below 10
 * that are multiples of 3 or 5, and we get 3, 5, 6 and 9
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
