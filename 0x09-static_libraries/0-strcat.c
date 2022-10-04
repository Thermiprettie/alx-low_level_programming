#include "main.h"
#include <string.h>

/**
 * _strcat - funtion that concatenate two strings
 *@dest: destination
 *@src: source
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
