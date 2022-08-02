#include "lists.h"

/**
 * free_dlistint - frees entire list
 * @head: pointer to node
 *
 * Return: void
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
