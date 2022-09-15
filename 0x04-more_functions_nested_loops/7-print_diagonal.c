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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lin = 1, lin <= n, lin++)
		{
			for (nt = 1; nt < lin; nt++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
