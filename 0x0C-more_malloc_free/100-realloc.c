#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using mallooc and free
 * @ptr: parameter
 * @old_size: old memorry
 * @new_size: new memory
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memry;
	char *ptr2;
