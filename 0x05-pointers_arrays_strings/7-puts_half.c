#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
	{
		len = (len + 1) / 2;
	}
	else
	{
		len /= 2;
	}
	while (len < i)
	{
		len++;
		_putchar(*(str + len - 1));
	}
	_putchar('\n');
}
