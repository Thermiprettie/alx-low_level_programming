#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: copied string
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
