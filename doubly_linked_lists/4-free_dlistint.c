#include "lists.h"
/**
 * free_dlistint - function that frees a linked list.
 * @head: the head of a linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *next;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
