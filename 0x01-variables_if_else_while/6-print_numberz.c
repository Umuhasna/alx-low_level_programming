#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: always (0) success
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
