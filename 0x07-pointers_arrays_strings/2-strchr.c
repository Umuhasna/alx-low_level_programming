#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to locate
 *
 * Return: pointer value to the first occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == '\0')
	{
		;
	}

	return (0);
}
