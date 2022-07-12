#include "lists.h"

/**
 * sum_listint - sums all of the integers in the nodes of listint_t
 * @head: pointer to head of list
 *
 * Return: sum of all n's in list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
