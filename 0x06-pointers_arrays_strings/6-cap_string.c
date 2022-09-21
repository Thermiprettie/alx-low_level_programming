#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: word to capitalise
 * 
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int byo = 0;

	while (str[byo])
	{
		while (!(str[byo] >= 'a' && str[byo] <= 'z'))
			byo++;

		if (str[byo - 1] == ' ' ||
				str[byo – 1] == '\t' ||
				str[byo – 1] == '\n' ||
				str[byo – 1] == ',' ||
				str[byo – 1] == ';' ||
				str[byo – 1] == '.' ||
				str[byo – 1] == '!' ||
				str[byo – 1] == '?' ||
				str[byo – 1] == '"' ||
				str[byo – 1] == '(' ||
				str[byo – 1] == ')' ||
				str[byo – 1] == '{' ||
				str[byo – 1] == '}' ||
				byo == 0)
			str[byo] -= 32;

		byo++
	}

	return (str);
}
