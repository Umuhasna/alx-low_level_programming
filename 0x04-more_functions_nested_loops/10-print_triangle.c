#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (w = size - h; w > 0; w--)
			{
				_putchar(' ');
			}
			for (w = 0; w < h; w++)
			{
				_putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
