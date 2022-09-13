#include "main.h"

/**
 * print_times_table - a function that prints the n times table,
 * starting with 0
 * function print nothing if n > 15 or n < 0
 *
 * @n: times table number (0 < n <= 15)
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int a, b, prnt;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				prnt = a * b;
				_putchar(44);
				_putchar(32);
				if (prnt <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(prnt + 48);
				}
				else if (prnt <= 99)
				{
					_putchar(32);
					_putchar((prnt / 10) + 48);
					_putchar((prnt % 10) + 48);
				}
				else
				{
					_putchar(((outp / 100) % 10) + 48);
					_putchar(((outp / 10) % 10) + 48);
					_putchar((outp % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
