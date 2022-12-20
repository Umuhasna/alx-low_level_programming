#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char tmp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	for (len = 0; len < i / 2; len++)
	{
		tmp = s[len];
		s[len] = s[j];
		s[j--] = tmp;
	}
}
