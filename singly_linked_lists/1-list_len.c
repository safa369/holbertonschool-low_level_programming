#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - function that count number of elements in a linked list.
 * @h: const list_t.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
