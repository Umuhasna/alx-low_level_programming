#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = size; column > 0; column--)
		{
			if (column <= row)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
