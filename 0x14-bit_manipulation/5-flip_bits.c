#include "main.h"

/**
 * flip_bits - returns the no of bits thant is to be flipped
 * to get from one number to another
 * @n: number
 * @m: another number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int set, lukup;
	unsigned int counter, r;

	counter = 0;
	lukup = 1;
	set = n ^ m;
	for (r = 0; r < (sizeof(unsigned long int) * 8); r++)
	{
		if (lukup == (set & lukup))
			counter++;
		lukup <<= 1;
	}
	return (counter);
}
