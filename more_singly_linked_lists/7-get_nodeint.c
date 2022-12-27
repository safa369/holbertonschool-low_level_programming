#include "lists.h"
/**
 * get_nodeint_at_index - funtion that return the nth node of a linked list.
 * @head: the head of a linked list.
 * @index: the index of the node.
 * Return: the node found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = head;

	if (node == NULL)
		return (NULL);
	while (node && count < index)
	{
		count++;
		node = node->next;
	}
	return (node);
}
