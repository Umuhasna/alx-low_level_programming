#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + i * (size + 1));
		sum1 += *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", sum, sum1);
}
