#include "main.h"
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter3
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
