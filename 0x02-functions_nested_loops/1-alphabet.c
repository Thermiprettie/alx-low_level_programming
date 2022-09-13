#include "main.h"
/**
 * print_alphabet - print alphabet in lower case
 * followed by a new line
 * Return: void
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
