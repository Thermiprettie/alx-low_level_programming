#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that
 * @array: array
 * @size: array size
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (!array)
		return;
	if (!action)
		return;

	for (u = 0; u < size; u++)
		action(array[u]);
}
