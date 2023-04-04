#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the first node
 * @index: index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL, otherwise the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (0);
}
