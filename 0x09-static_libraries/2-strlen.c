#include "main.h"

/**
 * _strlen - to check the length of a string
 * @s: a char
 * Return: length
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (*s++)
		strlen++;
	return (strlen);
}
