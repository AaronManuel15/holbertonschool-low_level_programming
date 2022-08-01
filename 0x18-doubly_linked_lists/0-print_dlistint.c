#include "lists.h"

/**
 * print_dlistint - prints each integer value in the linked list
 * @h: where to start printing from in the list
 *
 * Return: number of nodes printed from
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned long int nodeCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
