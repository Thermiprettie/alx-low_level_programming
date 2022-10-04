#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *lbn;

	lbn = strstr(haystack, needle);

	return (lbn);
}
