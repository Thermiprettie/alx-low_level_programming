#include "main.h"

/**
 * print_square - function to print square
 * @size: size of square
 * Return: a square of hash(#)
 */

void print_square(int size)
{
	int s;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= size; s++)
		{
			_putchar('#');
			for (r = 2; r <= size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
