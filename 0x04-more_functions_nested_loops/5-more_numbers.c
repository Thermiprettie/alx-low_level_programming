#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * followed by a new line
 * Return: 0 t0 14 ten times
 */

void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num/10) + '0');
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
