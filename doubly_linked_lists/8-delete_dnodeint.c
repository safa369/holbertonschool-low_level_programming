#include "lists.h"
/**
 * delete_dnodeint_at_index - function delete node at given position.
 * @head: head of linked list.
 * @index: position of node to delete.
 * Return: 1 if succeeded, or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp->next != NULL)
	{
		if (count == index)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (1);
}
