#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string
 * Return: string
 */

void puts2(char *str)
{
	int id = 0, slnt = 0;

	while (str[id++])
		slnt++;
	for (id = 0; id < slnt; id += 2)
		_putchar(str[id]);

	_putchar('\n');
}
