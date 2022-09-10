#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char st = 'a';

	while (st <= 'z')
	{
		if (st != 'e' && st != 'q')
		{
			putchar(st);
		}
		st++;
	}
	putchar('\n');

	return (0);
}
