#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list_t
 * @head: pointer to head of list
 * @n: integer to be added
 * Return: address of new element upon success. NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
