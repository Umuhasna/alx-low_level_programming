#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * linked list
 * @head: pointer to the first node
 *
 * Return: if the list is empty, return 0
 * else the sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
