#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j;
	int c[] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (j < 14)
		{
			if (str[i] == c[j] && str[i + 1] > 96 && str[i + 1] < 123)
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (str);
}
