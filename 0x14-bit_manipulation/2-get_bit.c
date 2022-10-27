#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index 'index' or -1 if an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider, bit_get;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = 1 << index;
	bit_get = n & divider;
	if (bit_get == divider)
		return (1);
	return (0);
}
