#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: input number
 * numbers separated by a comma and then a space
 * numbers must be printed in order
 * first number passed to function should be the first printed number
 * last printed number will be 98
 * usage of standard library is allowed
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
