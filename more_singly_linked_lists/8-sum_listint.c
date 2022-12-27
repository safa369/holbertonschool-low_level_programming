#include "lists.h"
/**
 * sum_listint - function that returns the sum of a linked list.
 * @head: linked list.
 * Return: the sum of linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
