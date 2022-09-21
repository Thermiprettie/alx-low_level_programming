#include "main.h"

/**
 * reverse_array - for reversing the content oof an array of integers
 * @n: number of elements of the array
 * @a: integer
 * Return: array of integers
 */
void reverse_array(int *a, int n)
{
	int ats, b;

	for (b = n - 1; b > n / 2; b--)
	{
		ats = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = ats;
	}
}
