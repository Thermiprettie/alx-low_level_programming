#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index of the bit to set
 * Return: 1 if successful or -1 if error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_to_set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit_to_set = ~(1 << index);
	*n = *n & bit_to_set;
	return (1);
}
