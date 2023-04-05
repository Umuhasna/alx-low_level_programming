#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to a pointer that points to the first node
 * @idx: the index of the list where the new node should be added
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	current = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	while (current != NULL && count < idx)
	{
		if (count == idx - 1)
		{
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
		count++;
	}

	return (NULL);
}
