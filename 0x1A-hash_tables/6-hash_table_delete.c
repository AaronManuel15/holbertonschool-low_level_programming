#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *surferPtr;


	if (!ht)
		return;
	if (!(ht->array))
	{
		free(ht);
		return;
	}
	for (i = 0; i <= ht->size; i++)
	{
		while (ht->array[i])
		{
			surferPtr = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = surferPtr;
		}
	}
	free(ht->array);
	free(ht);
}
