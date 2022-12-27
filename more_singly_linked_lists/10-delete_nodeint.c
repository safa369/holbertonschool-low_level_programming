#include "lists.h"
/**
 * delete_nodeint_at_index - function that delete the node at index.
 * @head: head of the linked list.
 * @index: the position of the node.
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *node_n = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1)
		{
			if (!node || !(node->next))
			{
				return (-1);
			}
				node = node->next;
				i++;
		}
	node_n = node->next;
	node->next = node_n->next;
	free(node_n);
	return (1);
}
