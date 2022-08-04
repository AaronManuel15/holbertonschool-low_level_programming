#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *surferPtr;
	int commaCheck = 0;

	if (!ht || !(ht->array))
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		surferPtr = ht->array[i];
		while (surferPtr)
		{
			if (commaCheck == 1)
				printf(", ");
			printf("'%s': '%s'", surferPtr->key, surferPtr->value);
			commaCheck = 1;
			surferPtr = surferPtr->next;
		}
	}
	printf("}\n");
}
