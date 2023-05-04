#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, size;

	size = sizeof(unsigned long int);
	if (index >= size * 8)
		return (-1);

	mask = n >> index;

	return (mask & 1);
}
