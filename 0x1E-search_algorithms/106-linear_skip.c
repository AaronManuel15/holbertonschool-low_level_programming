#include "search_algos.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>


/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list;
	skiplist_t *prev = list;
	char *msg = "Value found between indexes [%lu] and [%lu]\n";

	if (!list)
		return (NULL);

	while (node->express)
	{
		prev = node;
		node = node->express;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

		if (node->n >= value)
		{
			printf(msg, prev->index, node->index);
			for (; prev != node; prev = prev->next)
			{
				printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
			}
		}
		else if (!node->express)
		{
			prev = node;
			while (node->next)
				node = node->next;
			printf(msg, prev->index, node->index);
			for (; prev; prev = prev->next)
			{
				printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
			}
		}
	}
	return (NULL);
}
