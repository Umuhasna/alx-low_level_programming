#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of command line arguments
 * @argv: array of pointers to strings
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
