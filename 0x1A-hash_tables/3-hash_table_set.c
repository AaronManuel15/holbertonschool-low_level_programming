#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be added or edited
 * @key: non empty string
 * @value: value of the string. can be empty. will be copied
 *
 * Return: 1 on success. 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!newNode)
		return (0);
	if (!key || !value || !ht)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
		return (1);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
