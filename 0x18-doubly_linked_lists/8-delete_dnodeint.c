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
	unsigned int nodeCount = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0)
	{
		surferPtr = surferPtr->next;
		surferPtr->prev = NULL;
		free(*head);
		*head = surferPtr;
		return (1);
	}
	while (nodeCount < index - 1)
	{
		surferPtr = surferPtr->next;
		nodeCount++;
	}
	nodeHold = surferPtr->next;
	surferPtr->next = nodeHold->next;
	surferPtr = surferPtr->next;
	surferPtr->prev = nodeHold->prev;
	free(nodeHold);

	return (1);
}
