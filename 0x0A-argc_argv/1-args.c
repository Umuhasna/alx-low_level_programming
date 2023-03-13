#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: array of pointers to strings
 *
 * Return: always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
