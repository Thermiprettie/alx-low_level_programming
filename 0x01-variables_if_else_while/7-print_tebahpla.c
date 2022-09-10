#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char st;

	for (st = 'z'; st >= 'a'; st--)
	{
		putchar(st);
	}
	putchar('\n');
	return (0);
}
