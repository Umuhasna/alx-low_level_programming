#include "main.h"

int counter(int i, int n);

/**
 * counter - helper function that calculates if the number is prime
 * @i: number to evaluate
 * @n: number
 *
 * Return: 0
 */
int counter(int i, int n)
{
	if (n % i == 0 || n < 2)
	{
		return (0);
	}
	else if (n / i == 1)
	{
		return (1);
	}
	else
	{
		return (counter(i + 1, n));
	}
}

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: integer
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	return (counter(2, n));
}
