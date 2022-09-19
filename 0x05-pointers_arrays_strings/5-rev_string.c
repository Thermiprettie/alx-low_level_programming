#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
	int slnt = 0, index = 0;
	char sta8;

	while (s[index++])
		slnt++;

	for (index = slnt - 1; index >= slnt / 2; index--)
	{
		sta8 = s[index];
		s[index] = s[slnt - index - 1];
		s[slnt - index - 1] = sta8;
	}
}
