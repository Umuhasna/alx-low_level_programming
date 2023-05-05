#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex_or, count = 0;

	ex_or = n ^ m;
	while (ex_or != 0)
	{
		ex_or = ex_or & (ex_or - 1);
		count++;
	}

	return (count);
}
