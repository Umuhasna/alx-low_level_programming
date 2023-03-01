#include "main.h"
#include <stddef.h>

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
}
