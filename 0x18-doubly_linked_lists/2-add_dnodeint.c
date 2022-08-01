#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: pointer to node
 * @n: value for new node
 *
 * Return: address of new element on success or null on failure
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if ((*head) != NULL)
		(*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (*head);
}
