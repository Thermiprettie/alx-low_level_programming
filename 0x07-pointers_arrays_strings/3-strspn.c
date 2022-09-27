#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter1
 * @accept: parameter2
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sra;

	sra = strspn(s, accept);

	return (sra);
}
