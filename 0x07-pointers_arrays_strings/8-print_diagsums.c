#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 *                  of a square matrix of integers
 * @a: matrix
 * @size: size of matrix
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int id, s1 = 0, s2 = 0;

	for (id = 0; id < size; id++)
	{
		s1 += a[id];
		a += size;
	}

	a -= size;

	for (id = 0; id < size; id++)
	{
		s2 += a[id];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
