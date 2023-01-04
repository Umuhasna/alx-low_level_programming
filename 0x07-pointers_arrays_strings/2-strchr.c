#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: memory area
 * @c: constant byte
 *
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
