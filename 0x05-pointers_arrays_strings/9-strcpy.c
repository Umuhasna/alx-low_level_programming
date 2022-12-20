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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0 ; i < src[i]; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
