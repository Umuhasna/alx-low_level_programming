#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
