#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to the first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
