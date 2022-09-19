#include "main.h"

/**
 * _atoi - function that convert string to integer
 * number in the string can preceded by an infinite number of characters
 * all - and + signs must be taken into account before the number
 * using 'long is not allowed
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
	int sint = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			sint *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sint);
}
