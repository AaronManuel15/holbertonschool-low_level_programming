#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of list
 * @head: pointer to node
 * @n: value for new node
 *
 * Return: address of new element on success or null on failure
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptrCpy = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (ptrCpy->next != NULL)
		ptrCpy = ptrCpy->next;
	new->n = n;
	new->next = NULL;
	new->prev = ptrCpy;
	ptrCpy->next = new;

	return (new);
}
