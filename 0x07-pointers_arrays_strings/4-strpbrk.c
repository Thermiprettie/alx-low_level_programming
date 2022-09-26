#include "main.h"
#include <string.h>

/**
 * _strpbrk - search string for any set of bytes
 * @s: parameter1
 * @accept: parameter2
 * Return: value
 */
char *_strpbrk(char *s, char *accept)
{
	char *lnt;

	lnt = strpbrk(s, accept);

	return (lnt);
}
