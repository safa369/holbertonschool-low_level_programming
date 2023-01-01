#include "lists.h"
/**
 * sum_dlistint - function that return the sum of a linked list.
 * @head: the head of a linked list.
 * Return: return the sum, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
