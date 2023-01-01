#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node to the end of list.
 * @head: the head of list.
 * @n: the data to add it.
 * Return: the address of a new elment or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *tmp = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head)
	{
		tmp = *head;
		while (tmp->next != NULL)
		tmp = tmp->next;
		newNode->next = NULL;
		newNode->prev = tmp;
		tmp->next = newNode;
		return (newNode);
	}
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (*head);
}
