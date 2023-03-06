#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a pointer to an array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, mid;

	mid = (n + 1) / 2;
	for (j = 0; j < mid; j++)
	{
		n--;
		i = a[j];
		a[j] = a[n];
		a[n] = i;
	}
}
