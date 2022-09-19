#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: string
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int a, len;

	lenn = strlen(s);
	for (a = len - 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
