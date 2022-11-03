#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function searches for integers;
 * @array: integer;
 * @size: integer;
 * @cmp: pointer of a function;
 * Return: integer;
 */
int int_index(int *array, int size, int (*cmp) (int))
{
	int i, c;

	if (size < 0  || cmp == NULL || array == NULL)
		return (-1);
			i = 0;
			c = cmp(array[i]);
			while (c == 0 && i < size)
			{	i++;
			c = cmp(array[i]);
			}
			if (i == size)
				return (-1);
			return (i);
}
