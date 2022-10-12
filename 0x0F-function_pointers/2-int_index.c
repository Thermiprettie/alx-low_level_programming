#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: first element index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]) != 0)
			return (u);
	}

	return (-1);
}
