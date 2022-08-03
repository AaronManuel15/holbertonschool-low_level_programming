#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to be searched
 * @key: non empty string
 *
 * Return: value associated with key on success. Otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *surferPtr;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	surferPtr = ht->array[index];
	if (surferPtr == NULL)
		return (NULL);
	while (surferPtr)
	{
		if (strcmp(key, surferPtr->key) == 0)
			return (surferPtr->value);
		surferPtr = surferPtr->next;
	}
	return (NULL);
}
