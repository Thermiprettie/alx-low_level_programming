#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
