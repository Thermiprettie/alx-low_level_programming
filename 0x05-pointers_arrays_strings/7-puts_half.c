#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * function should print second half of the string
 * print the last n characters if the number of characters is odd
 * n is the '(length_of_the_string - 1) / 2'
 * @str: string to print
 * Return: second half of the string
 */

void puts_half(char *str)
{
	int id = 0, slnt = 0, n;

	while (str[id++])
		slnt++;

	if ((slnt % 2) == 0)
		n = slnt / 2;
	else
		n = (slnt + 1) / 2;

	for (id = n; id < slnt; id++)
		_putchar(str[id]);

	_putchar('\n');
}
