#include "main.h"

/**
 * square_root - function that find the natural square root of a given number
 * @i: number to calculate the square root of
 * @n: given number
 *
 * Return: 0
 */
int square_root(int i, int n)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (i == n || i == -n)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, n));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: given number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (square_root(0, n));
}
