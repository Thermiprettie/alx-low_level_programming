#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int x, y = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		str[y++] = s1[x];

	for (x = 0; s2[x]; x++)
		str[y++] = s2[x];

	return (str);
}
