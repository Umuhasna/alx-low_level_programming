#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 *
 * Return: On success returns a pointer to the duplicated string,
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j, len;
	char *dupstr;

	j = 0;
	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dupstr = malloc((sizeof(char) * len) + 1);
	if (dupstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dupstr[i] = str[j];
		j++;
	}
	dupstr[i] = '\0';

	return (dupstr);
}
