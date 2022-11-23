#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * print_list - function that print all the elemnts of linked list.
 * @h: cost list_t;
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while(h -> next != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)");
		else
		printf("[%d] %s", h -> len, h -> str);
		i++;
	}
return (i);	
}
