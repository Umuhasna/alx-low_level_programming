#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: points to a pointer that points to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	head = NULL;
}
