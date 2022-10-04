#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source to copy from
 * @n: input
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ats = 0, byo = 0;

	while (src[ats++])
		byo++;

	for (ats = 0; src[ats] && ats < n; ats++)
		dest[ats] = src[ats];

	for (ats = byo; ats < n; ats++)
		dest[ats] = '\0';

	return (dest);
}
