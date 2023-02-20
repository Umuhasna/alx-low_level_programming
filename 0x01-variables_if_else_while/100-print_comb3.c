#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always (0) success
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8 && y == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
