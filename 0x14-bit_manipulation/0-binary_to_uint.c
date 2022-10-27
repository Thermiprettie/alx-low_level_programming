#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted num or 0 if there is >=1 chars in
 * string b that is not 0 or 1 or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int bin;

	bin = 0;
	if (!b)
		return (0);
	for (r = 0; b[r] != '\0'; r++)
	{
		if (b[r] != '0' && b[r] != '1')
			return (0);
	}
	for (r = 0; b[r] != '\0'; r++)
	{
		bin <<= 1;
		if (b[r] == '1')
			bin += 1;
	}
	return (bin);
}
