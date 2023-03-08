#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0, if the string are equal, otherwise the difference
 * b/n the first unequal character
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0' || s2[i] == '\0')
			{
				return (s1[i] - s2[i]);
			}
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
}
