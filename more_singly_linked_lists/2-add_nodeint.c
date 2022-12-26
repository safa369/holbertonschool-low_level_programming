#include "lists.h"
/**
 * add_nodeint - functon that add new node at the begginnig.
 * @head: the first node in the list.
 * @n: the new node.
 * Return: a pointer or NULL if it fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
