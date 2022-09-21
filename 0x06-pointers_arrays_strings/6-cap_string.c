#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @ats: word to capitalise
 * Return: capitalized string
 */
char *cap_string(char *ats)
{
	int byo = 0;

	while (ats[byo])
	{
		while (!(ats[byo] >= 'a' && ats[byo] <= 'z'))
			byo++;

		if (ats[byo - 1] == ' ' ||
				ats[byo – 1] == '\t' ||
				ats[byo – 1] == '\n' ||
				ats[byo – 1] == ',' ||
				ats[byo – 1] == ';' ||
				ats[byo – 1] == '.' ||
				ats[byo – 1] == '!' ||
				ats[byo – 1] == '?' ||
				ats[byo – 1] == '"' ||
				ats[byo – 1] == '(' ||
				ats[byo – 1] == ')' ||
				ats[byo – 1] == '{' ||
				ats[byo – 1] == '}' ||
				byo == 0)
			ats[byo] -= 32;

		byo++
	}

	return (ats);
}
