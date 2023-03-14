#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the destination string where to concatenate
 * @s2: pointer to the string to concatenate
 *
 * Return: pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2 + 1;
	dest = malloc((len) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		dest[i] = s1[i];
	}
	j = 0;
	for (; i < len; i++)
	{
		dest[i] = s2[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
