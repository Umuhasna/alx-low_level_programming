#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes the absolute value of an integer
 * @i: the parameter
 * Return: 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
	_putchar('\n');
}
