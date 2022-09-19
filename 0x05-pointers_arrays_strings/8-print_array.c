#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints 'n' elements of an array of integers,
 * followed by new line
 * @a: integer type
 * @n: integer
 * separate numbers by comma, followed by a space
 * numbers should be displayed in the same order as they are stored
 * in the array
 * usage of printf is allowed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int id;

	for (id = 0; id < n; id++)
	{
		printf("%d", a[id]);

		if (id == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
