#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int st;

	for (st = 'a'; st <= 'z'; st++)
		putchar(st);
	for (st = 'A'; st <= 'Z'; st++)
		putchar(st);
	putchar('\n');
	return (0);
}
