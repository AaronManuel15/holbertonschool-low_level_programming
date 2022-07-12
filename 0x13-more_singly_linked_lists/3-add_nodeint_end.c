#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to head of list
 * @n: integer to be added to node
 * Return: address of new element upon success. NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptrCopy;

	ptrCopy = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		while (ptrCopy->next)
			ptrCopy = ptrCopy->next;

		ptrCopy->next = new;
	}
	return (new);
}
