#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return:  (Success)
 */
int main(void)
{
	int a, boolean, boolean1;
	long int nm1, nm2, sn, sn1, nm11, nm22;

	nm1 = 1;
	nm2 = 2;
	boolean = boolean1 = 1;
	printf("%ld, %ld", nm1, nm2);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			sn = nm1 + nm2;
			printf(", %ld", sn);
			nm1 = nm2;
			nm2 = sn;
		}
		else
		{
			if (boolean1)
			{
				nm11 = nm1 % 1000000000;
				nm22 = nm2 % 1000000000;
				nm1 = nm1 / 1000000000;
				nm2 = nm2 / 1000000000;
				boolean1 = 0;
			}
			sn1 = (nm11 + nm22);
			sn = nm1 + nm2 + (sn1 / 1000000000);
			printf(", %ld", sn);
			printf("%ld", sn1 % 1000000000);
			nm1 = nm2;
			nm11 = nm22;
			nm2 = sn;
			nm22 = (sn1 % 1000000000);
		}
		if (((nm1 + nm2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
