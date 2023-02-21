#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
