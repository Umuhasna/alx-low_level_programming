#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;
	int check = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				if (check)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				check = 1;

				current = current->next;
			}
		}
		printf("}\n");
	}
}
