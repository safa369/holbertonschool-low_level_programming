#include "lists.h"
/**
 * dlistint_len - function that returns the numbers of element.
 * @h: the head of a linked list.
 * Return: nbth of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
