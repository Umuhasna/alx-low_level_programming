#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the first node
 *
 * return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		h = h->next;
		num_of_elements++;
	}

	return (num_of_elements);
}
