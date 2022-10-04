#include "main.h"

/**
 * _strdup - pointer to a newly allocated space
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char copy;
	int st8, lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (st8 = 0; str[st8]; st8++)
		lenght++;

	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (st8 = 0; str[st8]; st8++)
		copy[st8] = str[st8];

	copy[lenght] = '\0';

	return (copy);
}
