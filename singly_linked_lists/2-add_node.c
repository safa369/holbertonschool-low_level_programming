#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - function that adds node at the beginnig of list_t.
 * @head: list_t.
 * @str: const char.
 * Return: linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return(NULL);
	new->str = strdup(str);
	new->next = *head;
	while(str)
	{
		i++;
		str++;
	}
	new->len = i;
	*head = new;
	return (new);
}
