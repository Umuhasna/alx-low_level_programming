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
	int i, j;

	for (j = 0; j < n / 2; j++)
	{
		i = a[j];
		a[j] = a[n - 1];
		a[n - 1] = i;
		n--;
	}
}
