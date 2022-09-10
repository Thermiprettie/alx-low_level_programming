#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
	int m;
	char st;

	for (m = '0'; m <= '9'; m++)
{
	putchar(m);
	for (st = 'a'; st <= 'f'; st++)
		putchar(st);
	putchar('\n');

	return (0);
}
