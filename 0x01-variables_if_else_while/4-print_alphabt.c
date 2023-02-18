#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: always (0) success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}

	putchar('\n');
	return (0);
}
