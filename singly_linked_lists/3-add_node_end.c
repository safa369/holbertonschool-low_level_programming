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
	list_t *last = *head;
	unsigned int s = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free (new);
		return(0);
	}
	while (str[s] != 0)
		s++;
	new->str = strdup(str);
	new->len = s;
	new->next = NULL;
	while (last->next != NULL)
		*last = *last->next;
	last->next = new;
	return (new);
}
