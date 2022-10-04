#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of character, initialising a specific character
 *
 * @size: size of the array
 * @c: character
 *
 * Return: array of character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < size; u++)
	{
		s[u] = c;
	}

	return (s);
}
