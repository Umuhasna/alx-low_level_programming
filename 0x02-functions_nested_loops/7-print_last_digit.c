#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: print the last digit of the number
 * @i: the number
 *
 * Return: Last digit of the number
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
