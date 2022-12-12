#include "main.h"
#include <string.h>

/**
 * _memcpy - function to copy memery
 * @dest: destination parameter
 * @src: source parameter
 * @n: parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
