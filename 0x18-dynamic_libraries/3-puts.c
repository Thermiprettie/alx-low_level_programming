#include "main.h"

/**
 * _puts - a function that prints a string
 * followed by a new line
 * print to 'stdout'
 * @str: a string
 * Return: string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
