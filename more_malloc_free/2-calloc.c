#include "main.h"
/**
 * _calloc - function allocate memory for an array.
 * @nmemb: unsigned int;
 * @size: unsigned int;
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb + 1 * sizeof(size));
	if (ptr == NULL)
		return (NULL);
return (ptr);
}
