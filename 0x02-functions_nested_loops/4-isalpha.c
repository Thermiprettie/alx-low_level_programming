#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: ASCII code character
 *
 * Return: 1 if c is a letter and 0, if otherwise
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
