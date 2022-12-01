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
	unsigned int i;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free (new);
		return(0);
	}
	new->str = strdup(str);
	i = len_str(new->str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
	last->next = new;
	}
	return (new);
}
/**
*len_str - function that count the length of a string.
 *@ch: char.
 *Return: unsigned int.
 **/
unsigned int len_str(char *ch)
{
	if (*ch == 0)
	return (0);
	else
	return (1 + len_str(ch + 1));
}
