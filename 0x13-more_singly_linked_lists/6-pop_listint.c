#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to a pointer that points to the first node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *node;

	if (head == NULL)
		return (0);

	node = *head;
	if (node == NULL)
		return (0);

	i = node->n;
	*head = node->next;
	free(node);

	return (i);
}
