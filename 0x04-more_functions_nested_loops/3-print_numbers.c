#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	for (int num = '0'; num <= '9'; num++)
	{
		_putchar("%d", num);
		_putchar('\n');
	}
}
