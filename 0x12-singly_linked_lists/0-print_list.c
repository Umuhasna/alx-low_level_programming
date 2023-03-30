#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current;

	if (h == NULL)
		return (0);

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
			count++;
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
			count++;
		}
		current = current->next;
	}

	return (count);
}
