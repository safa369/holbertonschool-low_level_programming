#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - funtion that free a linked list.
 * @head: the of a list.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
