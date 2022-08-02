#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to node
 * @index: node to get
 *
 * Return: node or NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *retrieverPtr = head;
	unsigned int count;

	for (count = 1; count <= index; count++)
	{
		if (retrieverPtr->next == NULL)
			return (NULL);
		retrieverPtr = retrieverPtr->next;
	}
	return (retrieverPtr);
}
