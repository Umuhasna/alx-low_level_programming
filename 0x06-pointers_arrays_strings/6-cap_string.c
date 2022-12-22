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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == c[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
