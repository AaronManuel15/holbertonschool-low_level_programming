#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the idx position
 * @head: double pointer to head of list
 * @n: value to be added to newNode
 * @idx: position for node to be added
 *
 * Return: address of new node upon success, NULL upon failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int count = 0;

	temp = *head;
	while (count < idx - 1)
	{
		if (!(temp->next))
			return (NULL);

		temp = temp->next;
		count++;
	}
	newNode = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	newNode->n = n;

	return (newNode);
}
