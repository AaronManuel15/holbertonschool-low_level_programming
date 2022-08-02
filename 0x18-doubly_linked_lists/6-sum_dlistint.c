#include "lists.h"

/**
 * sum_dlistint - returns the sum of all n's in list
 * @head: pointer to node
 *
 * Return: sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *retrieverPtr = head;
	unsigned int sum = 0;

	while (retrieverPtr)
	{
		sum += retrieverPtr->n;
		retrieverPtr = retrieverPtr->next;
	}
	return (sum);
}
