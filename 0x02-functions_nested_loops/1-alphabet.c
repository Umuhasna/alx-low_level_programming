#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Print alphabet in lowercase followed by newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	for (c = 'a', c <= 'z', c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
