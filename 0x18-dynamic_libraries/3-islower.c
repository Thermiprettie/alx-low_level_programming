#include "main.h"

/**
 * _islower - a program that checks for lowercase character
 * and return 1 if input is a lowercase character. If not, it will show 0
 *
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
