#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: 1st srgument
 * @src: 2nd argument
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
