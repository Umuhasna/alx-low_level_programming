#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the binary
 *
 * Return: the converted number (success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		res = res * 2 + (b[i] - '0');
	}

	return (res);
}
