#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times to print character _
 * line should end with \n
 * print only \n if n is 0 or less
 * Return: straight line
 */

void print_line(int n)
{

	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}

	_putchar('\n');
}
