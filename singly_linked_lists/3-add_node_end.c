#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node_end - function add node in the end of linked list.
 *@head: list_t.
 *@str: string.
 *Return: the addres of the new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t **last;
	unsigned int s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free (new);
		return(0);
	}
	new->str = strdup(str);
	if (new->str != NULL)
	{
		free(new->str);
		return(0);
	}
	s = len_str(new->str);
	*last = *head;
	new->len = s;
	new->next = NULL;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
