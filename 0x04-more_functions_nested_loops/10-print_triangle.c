#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * followed by a new line
 * @size: size of triangle
 * print only a new line if size is 0 or less
 * print the triangle using character #
 * Return: triangle
 */

void print_triangle(int size)
{
	int x;
	int tri;

	x = 1


	while (x <- size && size > 0)
	{
		tri = 0;
		while (tri < size - x)
		{
			_putchar(' ');
			tri++;
		}

		_putchar('\n');
		x++;
	}
	if (x == 1)
		_putchar('\n');
}
