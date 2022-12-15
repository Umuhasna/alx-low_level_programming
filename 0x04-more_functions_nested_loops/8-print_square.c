#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int h = size;
	int w;

	if (size > 0)
	{
		while (h-- > 0)
		{
			w = size;

			while (w-- > 0)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
