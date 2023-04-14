#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: integer
 * @m: integer
 *
 * Return: the number of bits that need to be flipped to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		count += 1;
		xor &= (xor - 1);
	}

	return (count);
}
