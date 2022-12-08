#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print to standard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(err);

	return (1);
}
