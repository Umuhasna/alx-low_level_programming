#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list
 * @head: pointer to the first node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);

		return (1);
	}

	for (i = 0; i < index && node; i++)
		node = node->next;

	if (!node)
		return (-1);
	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
