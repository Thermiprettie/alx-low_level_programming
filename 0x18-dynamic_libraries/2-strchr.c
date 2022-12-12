#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: parameter1
 * @c: parameter2
 * Return: first occurence
 */
char *_strchr(char *s, char c)
{
	char *sar;

	sar = strchr(s, c);

	return (sar);
}
