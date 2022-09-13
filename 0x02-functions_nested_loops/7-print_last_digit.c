#include "main.h"

/**
 * print_last_digit -a funtion that will
 * print the last digit of
 * a number
 * @n: int number is the input
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (number < 0)
	{
		_putchar(-number + '0');
		return (-number);
	}
	else
	{
		_putchar(number + '0');
		return (number);
	}
}
