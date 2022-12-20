#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, tmp, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	j = len - 1;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
