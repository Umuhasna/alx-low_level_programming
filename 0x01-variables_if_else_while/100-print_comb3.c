#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combination of two digits
 *
 * Return: 0
 */
int main(void)
{
	int n, i;

	n = i = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(n);
			putchar(i);

			if ((n != '9') || (n == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
