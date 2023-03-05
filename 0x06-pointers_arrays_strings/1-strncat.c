#include "main.h"

/**
 * _strncat - concatenates n bytes from src to dest
 * @dest: pointer to the string where we append
 * @src: pointer to the string to be appended
 * @n: max number of bytes to append from src
 *
 * Return: dest (the result string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
