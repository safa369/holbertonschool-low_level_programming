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
	unsigned int i, m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = nmemb * size;
	ptr = malloc(m);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < m; i++)
		ptr[i] = 0;
return (ptr);
}
