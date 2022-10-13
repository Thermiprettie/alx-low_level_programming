#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of stringd passed to the function
 * Return: NIL if one of the string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list striings;
	char *sta8;
	unsigned int id;

	va_start(striings, n);

	for (id = 0; id < n; id++)
	{
		sta8 = va_arg(striings, char *);

		if (sta8 == NULL)
			printf("(nil)");
		else
			printf("%s", sta8);

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(striings);
}
