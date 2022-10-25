#include "main.h"
/**
 * malloc_checked - allocate memory using.
 * @b: unsigned int;
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
