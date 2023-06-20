#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next_node;

	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
