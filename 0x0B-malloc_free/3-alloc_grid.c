#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array of ints.
 * @width: width of array
 * @height: the height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **arraay;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arraay = malloc(sizeof(int *) * height);

	if (arraay == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arraay[x] = malloc(sizeof(int) * width);

		if (arraay[x] == NULL)
		{
			for (; x >= 0; x--)
				free(arraay[x]);

			free(arraay);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arraay[x][y] = 0;
	}

	return (arraay);
}
