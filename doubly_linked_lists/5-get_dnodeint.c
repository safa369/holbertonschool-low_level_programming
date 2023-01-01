#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns nth node of a linked list.
 * @head: the head of a linked list.
 * @index: the index of a node to search it.
 * Return: the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
