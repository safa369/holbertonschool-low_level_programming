#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes given as a parameter.
 * @array: integer;
 * @size: size_t;
 * @action: a pointer for a functon;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
