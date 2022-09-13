#include "main.h"
/**
 * main - print alphabet in lower case
 * followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char saralphabet;

	for (saralphabet = 'a'; saralphabet <= 'z'; saralphabet++)
	{
		_putchar(saralphabet);
	}
	_putchar('\n');
}
