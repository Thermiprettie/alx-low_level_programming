#include "main.h"
/**
 * leet - encode a string
 * @ats: string to encode
 * Return: string
 */

char *leet(char *ats)
{
	int aa = 0, ab;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (ats[aa])
	{
		for (ab = 0; ab <= 7; ab++)
		{
			if (ats[aa] == leet[ab] ||
					ats[aa] - 32 == leet[ab])
				ats[aa] = ab + '0';
		}

		aa++;
	}

	return (ats);
}
