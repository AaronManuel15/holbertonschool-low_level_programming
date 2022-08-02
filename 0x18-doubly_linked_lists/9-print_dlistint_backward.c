#include "lists.h"

/**
 * print_dlistint_backward - prints list backwards
 * @h: pointer to node
 *
 * Return: number of nodes
 *
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *surferPtr = h;
	int nodeCount = 0;

	if (!h)
		return (nodeCount);

	while (surferPtr->next != NULL)
		surferPtr = surferPtr->next;

	while (surferPtr != NULL)
	{
		nodeCount++;
		printf("%d\n", surferPtr->n);
		surferPtr = surferPtr->prev;
	}
	return (nodeCount);
}
