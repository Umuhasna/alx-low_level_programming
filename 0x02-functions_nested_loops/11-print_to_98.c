#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for
		printf("%d, ", n++);
	}
	else
	{
		printf("%d, ", n--);
	}
}
