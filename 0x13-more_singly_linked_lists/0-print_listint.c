#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: points to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *current;

	if (h == NULL)
		return (0);

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;

		current = current->next;
	}

	return (count);
}
