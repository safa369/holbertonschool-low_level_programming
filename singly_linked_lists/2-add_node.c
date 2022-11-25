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
	unsigned int a;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new->str);
		return (0);
	}
	a = len_str(new->str);
	new->len = a;
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * len_str - function that count the length of a string.
 * @ch: char.
 * Return: unsigned int.
 */
unsigned int len_str(char *ch)
{
	if (*ch == 0)
	{
		free(ch);
		return (0);
	}
	else
		return (1 + len_str(ch + 1));
}
