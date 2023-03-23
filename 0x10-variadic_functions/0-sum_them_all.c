#include "variadic_functions.h"

/**
 * sum_them_all -returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}

	va_end(args);

	return (sum);
}
