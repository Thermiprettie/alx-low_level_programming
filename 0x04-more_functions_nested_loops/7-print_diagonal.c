#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal
 * line on the terminal
 * @n: number of times '\' should be printed
 * character \ should be printed n times
 * The diagonal will end with a \n
 * print only \n if n is 0 or less
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int lin;
	int nt;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (nt = 0; nt < lin; nt++)
				_putchar(' ');
			_putchar('\\');

			if (lin == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
