#include "lists.h"
/**
 * listint_len - count the numbers of elements in a linkesd list.
 * @h: linked list.
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t s;

	s = 0;
	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
