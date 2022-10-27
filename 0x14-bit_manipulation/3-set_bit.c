#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index of the bit to set, starting from 0
 * Return: 1 if successful or -1 if error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_to_set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit_to_set = 1 << index;
	*n = *n | bit_to_set;
	return (1);
}
