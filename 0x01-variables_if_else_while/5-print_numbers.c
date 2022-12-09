#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
