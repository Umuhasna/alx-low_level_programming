#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: the capitalized string (str)
 */
char *cap_string(char *str)
{
	int i, j;
	char ch[] = {' ', '\n', ',', '.', ';', '(', ')',
		'"', '{', '}', '!', '?', 11, 9};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (str[i] == ch[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
