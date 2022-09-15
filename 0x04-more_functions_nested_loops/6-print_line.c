#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * only use _putchar function
 * The character _ should be printed n times
 * line should end with \n
 * print only \n if n is 0 or less
 * Return: straight line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int lin;

		for (lin = 1; lin <= n; lin++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
