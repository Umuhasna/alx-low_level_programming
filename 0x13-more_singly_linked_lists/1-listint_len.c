#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: points to the first node
 *
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current;

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
