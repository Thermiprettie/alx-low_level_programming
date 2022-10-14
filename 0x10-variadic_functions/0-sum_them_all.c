#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Number of parameters
 * @...: parameter
 * @sum: the output
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int id;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(number, n);

	for (id = 0; id < n; id++)
		sum += va_arg(number, int);

	va_end(number);

	return (sum);
}
