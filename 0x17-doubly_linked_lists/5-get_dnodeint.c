#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: the number that represent the node to return
 *
 * Return: returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node = head;

	for (i = 0; i < index && node; i++)
		node = node->next;

	return (node);
}
