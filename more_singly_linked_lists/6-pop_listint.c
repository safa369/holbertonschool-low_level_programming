#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that delete the head of a node .
 * @head: head of the linked list.
 * Return: the data tha delete.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int s;

	if (!head || !*head)
	return (0);	
	s = (*head)->n;
	node = (*head)->next;
	free (*head);
	*head = node;
	return (s);
}
