#include <stdio.h>

/**
 * main - finds and prints largest prime followed by new line
 *
 * Return: 0
 */
int main(void)
{
	long prm;
	long div;
	
	prm = 612852475143;

	while (div < (prm / 2))
	{
		if ((prm % 2) == 0)
		{
			prm /= 2;
			continue;
		}

		for (div = 3; div < (prm / 2); div += 2)
		{
			if ((prm % div) == 0)
				prm /= div;
		}
	}

	printf("%ld\n", prm);

	return (0);
}
