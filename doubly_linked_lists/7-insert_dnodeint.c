#include "lists.h"
/**
 * insert_dnodeint_at_index - function that add new node at given pos.
 * @h: head.
 * @idx: the position of new node.
 * @n: the new data to add it.
 * Return the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *tmp = *h;

	if (idx == 0)
	{
	return (add_dnodeint(h, n));		
	}
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp ->next == NULL)
		return (add_dnodeint_end(h,n));
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;
	return (newNode);
}
