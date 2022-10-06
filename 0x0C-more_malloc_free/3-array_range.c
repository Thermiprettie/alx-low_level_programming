#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: range
 */

int *array_range(int min, int max)
{
	int *arraay, b, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arraay = malloc(sizeof(int) * size);

	if (arraay == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		arraay[b] = min++;

	return (arraay);
}
