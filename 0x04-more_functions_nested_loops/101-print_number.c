#include "main.h"

/**
 * print_number - prints integer
 * @n: int to print
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(num / 10);

	_putchar((number % 10) + '0');
}
