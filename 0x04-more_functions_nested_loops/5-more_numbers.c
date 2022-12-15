#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		j = 0;

		while (j <= '14')
		{
			_putchar(j);
			j++;
		}
	}
	_putchar('\n');
}
