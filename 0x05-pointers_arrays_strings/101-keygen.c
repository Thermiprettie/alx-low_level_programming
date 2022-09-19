#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for
 * the program '101-crackme'
 * you can use standard library
 * Return: generated passwords
 */

int main(void)
{
	char pswd[84];
	int i = 0, s = 0, op, op1;

	srand(time(0));

	while (s < 2727)
	{
		pswd[i] = 33 + rand() % 94;
		s += pswd[i++];
	}

	pswd[i] = '\0';

	if (s != 2772)
	{
		op = (s - 2772) / 2;
		op1 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			op++;

		for (i = 0; pswd[i]; i++)
		{
			if (pswd[i] >= (33 + op))
			{
				pswd[i] -= op;
				break;
			}
		}
		for (i = 0; pswd[i]; i++)
		{
			if (pswd[i] >= (33 + op1))
			{
				pswd[i] -= op1;
				break;
			}
		}
	}

	printf("%s", pswd);

	return (0);
}
