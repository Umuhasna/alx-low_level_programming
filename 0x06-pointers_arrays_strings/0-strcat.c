#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
