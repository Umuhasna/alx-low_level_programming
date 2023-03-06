#include "main.h"

/**
 * _strncpy - copies n character of a string
 * @dest: pointer to where the string is copied
 * @src: the string to be copied
 * @n: number of characters to be copied from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
		;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		if (n < len)
		{
			if (i < n)
			{
				dest[i] = src[i];
			}
		}
		else
		{
			if (i < len)
			{
				dest[i] = src[i];
			}
			else if (i < n)
			{
				dest[i] = '\0';
			}
		}
	}
	dest[i] = '\0';

	return (dest);
}
