#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of linked list
 * @head: pointer to node
 * @index: node number to delete
 *
 * Return: 1 if successfull, -1 on failure
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *surferPtr = *head, *nodeHold = NULL;
	unsigned int nodeCount;

	if (*head == NULL)
		return (-1);

	for (nodeCount = 0; nodeCount < index; nodeCount++)
	{
		if (surferPtr == NULL)
			return (-1);
		surferPtr = surferPtr->next;
	}
	if (surferPtr->prev)
	{
		nodeHold = surferPtr->prev;
		nodeHold->next = surferPtr->next;
	}
	if (surferPtr->next)
	{
		nodeHold = surferPtr->next;
		nodeHold->prev = surferPtr->prev;
	}
	free(surferPtr);
	if (index == 0)
		*head = nodeHold;

	return (1);
}
