#include "main.h"

/**
 * main - print the alphabet in lowercase ten times
 * followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	char saralph;

	for (x = 0; x <= 9; x++)
	{
		for (saralph = 'a'; saralph <= 'z'; saralph++)
		{
			_putchar(saralph);
		}
		_putchar('\n');
	}
}
