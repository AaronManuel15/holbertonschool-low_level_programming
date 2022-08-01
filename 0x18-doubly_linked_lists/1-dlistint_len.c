#include "lists.h"

/**
 * dlistint_len - returns the number of elements in linked list
 * @h: where to start printing from in the list
 *
 * Return: number of elements in linked list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned long int nodeCount = 0;

	while (h->prev)
		h = h->prev;

	while (h)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
