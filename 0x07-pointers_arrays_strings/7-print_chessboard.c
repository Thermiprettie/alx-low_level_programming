#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: array
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int s, u;

	for (s = 0; a[s][7]; s++)
	{
		for (u = 0; u < 8; u++)
			_putchar(a[s][u]);

		_putchar('\n');
	}
}
