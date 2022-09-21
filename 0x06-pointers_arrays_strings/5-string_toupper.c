#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Return: uppercase letters
 */
char *string_toupper(char *byo)
{
	int x;

	x  = 0;

	while (byo[x++])
	{
		if (byo[x] >= 'a' && byo[x] <= 'z')
			byo[x] -= 32;
	}

	return (byo);
}
