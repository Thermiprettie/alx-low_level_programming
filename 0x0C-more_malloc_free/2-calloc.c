#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: parameter
 * @size: memory size
 * Return: NULL if nmemb or size is 0 and malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = calloc(nmemb, size);

	if (s == NULL)
		return (NULL);

	return (s);
}
