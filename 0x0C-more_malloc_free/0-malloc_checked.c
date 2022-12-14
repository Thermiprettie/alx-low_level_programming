#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
