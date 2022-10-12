#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - function
 * @s: operator
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op != NULL && *(op_s[i].op) != *s)
		i++;

	return (op_s[i].f);
}
