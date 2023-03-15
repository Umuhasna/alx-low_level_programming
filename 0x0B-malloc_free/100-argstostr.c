#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of pointers to strings
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, count;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[count] = av[i][j];
			count++;
		}
		str[count] = '\n';
		count++;
	}
	str[count] = '\0';
	return (str);
}
