#include "main.h"

/**
 * _isdigit - check if it is a digit
 * @c: print int
 * Return: 1 if c is digit and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}