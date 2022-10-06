#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: parameter
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concate;
	unsigned int len = n, id;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (id = 0; s1[id]; id++)
		len++;

	concate = malloc(sizeof(char) * (len +1));

	if (concate == NULL)
		return (NULL);

	len = 0;

	for (id = 0; s1[id]; id++)
		concate[len++] = s2[id];

	for (id = 0; s2[id] && id < n; id++)
		concate[len++] = s2[id];

	concate[len] = '\0';

	return (concate);
}
