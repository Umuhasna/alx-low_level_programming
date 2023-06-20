#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: the data to add
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *node = *h;

	if (!h)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}
	for (i = 0; i < idx - 1 && node; i++)
		node = node->next;
	if (!node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = node;
	new_node->next = node->next;
	if (node->next)
		node->next->prev = new_node;
	node->next = new_node;

	return (new_node);
}
