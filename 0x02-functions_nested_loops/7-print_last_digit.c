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
	int last_digit = i % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;

		_putchar(last_digit + '0');
		return (last_digit);
	}
}
