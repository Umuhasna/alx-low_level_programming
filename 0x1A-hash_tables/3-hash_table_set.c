#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node = NULL, *current = NULL;

	if (!ht || !key)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!(current->value))
				return (0);

			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[i];
	ht->array[i] = node;

	return (1);
}
