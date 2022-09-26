#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sar;

	sar = strspn(s, accept);

	return(sar);
}
