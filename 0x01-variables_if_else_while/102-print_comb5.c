#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: always (0) success
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		y++;
		}
	x++;
	}
	putchar('\n');

	return (0);
}
