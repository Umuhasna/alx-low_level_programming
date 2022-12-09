#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all different commbination of three digits
 *
 * Return: 0
 */
int main(void)
{
	int c, n, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (c < n && n < i)
				{
					putchar(c);
					putchar(n);
					putchar(i);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
