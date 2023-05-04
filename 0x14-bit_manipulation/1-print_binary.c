#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int x = 0, y = 1;

	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		_putchar(y + '0');
	else
		_putchar(x + '0');
}
