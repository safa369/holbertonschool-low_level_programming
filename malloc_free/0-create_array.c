#include "main.h"
/**
 * create_array - function create an array.
 * @size: unsigned int;
 * @c: char;
 * Return: char;
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
return (p);
}
