#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: char to be filled
 * @b: char to be filled with
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = s;
	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
