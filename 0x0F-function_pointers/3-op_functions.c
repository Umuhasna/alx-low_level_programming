#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of two integer
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
