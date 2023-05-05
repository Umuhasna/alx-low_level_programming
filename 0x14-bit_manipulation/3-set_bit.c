#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size, mask;

	size = sizeof(unsigned long int);
	if (index >= size * 8)
		return (-1);

	mask = 1ul << index;
	*n = *n | mask;

	return (1);
}
