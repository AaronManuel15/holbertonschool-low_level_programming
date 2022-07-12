#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to head of list
 *
 * Return: head->n on success or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!(*head))
		return (0);

	temp = *head;
	*head = (*head)->next;

	x = temp->n;
	free(temp);
	return (x);
}
