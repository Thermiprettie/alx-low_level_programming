#include "main.h"

/**
 * print_sign - a function that prints the sign
 * of a number
 * prints either +, 0, or -1, depending on the output
 * Return: 1 if n is greater than zero, and 0 if zero, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return(0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
