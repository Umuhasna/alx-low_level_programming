#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			j = va_arg(args, int);
			printf("%d", j);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}

		va_end(args);
	}
	printf("\n");
}
