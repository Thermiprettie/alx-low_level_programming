#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int no = 1;
	char *endn = (char *)&no;

	if (*endn == 1)
		return (1);

	return (0);
}
