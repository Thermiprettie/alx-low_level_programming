#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that sums up two integers
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a number from another
 * @a: number 1
 * @b: number 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of numbers
 * @a: number 1
 * @b: number 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b)
}


/**
 * op_div - division of numbers
 * @a: number 1
 * @b: number 2
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: number 1
 * @b: number 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
