#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @argmt: argument
 */
void print_char(va_list arg)
{
	char abc;

	abc = va_arg(arg, int);
	printf("%c", abc);
}

/**
 * print_int - prints integers
 * @argmt: argument
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - print a float
 * @argmt: argument
 */
void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - prints a string
 * @argmt: arguments
 */
void print_string(va_list arg)
{
	char sta8;

	sta8 = va_arg(arg, char *);

	if (sta8 == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", sta8);
}

/**
 * print_all - functions that prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable
 */
void print_all(const char * const format, ...)
{
	va_list argument;
	int s = 0; y = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arguments, format);

	while (format && (*(format + s)))
	{
		y = 0;

		while (y < 4 && (*(format + s) != *(funcs[j].symbol)))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(arguments);
			separator = ", ";
		}

		s++;
	}

	printf("\n");

	va_end(arguments);
}
