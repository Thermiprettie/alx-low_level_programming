#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 * @...: parameter
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int id;

	va_start(numbers, n);

	for (id = 0; id < n; id++)
	{
		printf("%d", va_arg(numbers, int));

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
