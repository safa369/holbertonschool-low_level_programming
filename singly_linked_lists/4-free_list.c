#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a linked list.
 * @head: list_t.
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head;
		last->next = head->next;
		free(last->str);
		free(last);
		head = head->next;
	}
}
