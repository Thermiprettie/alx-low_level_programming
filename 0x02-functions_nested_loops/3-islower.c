#include "main.h"

/**
 * _islower - checks for lowercase character
 * as inputs
 * @c: character in ASCII code
 *
 * Return: 1 if c is lowercase, and 0, if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
