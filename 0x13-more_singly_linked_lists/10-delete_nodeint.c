#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: points to a pointer that points to the first node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *node = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);

		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			node->next = current->next;
			free(current);
			return (1);
		}
		node = current;
		current = current->next;
		count++;
	}
	return (-1);
}
