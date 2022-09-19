#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: swapped value
 */

void swap_int(int *a, int *b)
{
	int mynum = *a;
	*a = *b;
	*b = mynum;
}
