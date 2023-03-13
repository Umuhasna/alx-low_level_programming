#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to strings
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		res = res * atoi(argv[i]);
	}
	printf("%d\n", res);

	return (0);
}
