#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beg of a list.
 * @head: the head;
 * @n: the data to add it.
 * Return: the address of a new element or NULL if it failes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;
	return (newNode);
}
