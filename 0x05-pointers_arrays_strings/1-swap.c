#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
