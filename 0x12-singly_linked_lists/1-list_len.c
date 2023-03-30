#include "lists.h"

/**
 * list_len - count the number of elements in list_t list
 * @h: pointer to the first node
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current;

	if (h == NULL)
		return (0);

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
