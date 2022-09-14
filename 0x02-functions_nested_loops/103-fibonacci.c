#include <stdio.h>

/**
 * main - a program that finds and prints the sum of
 * the even-valued terms, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	long int x, y, z, prnt;

	x = 1;
	y = 2;
	z = prnt = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if ((x % 2) == 0)
		{
			prnt += x;
		}
	}
	printf("%ld\n", prnt);
	return (0);
}
