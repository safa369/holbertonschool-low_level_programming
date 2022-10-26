#include "main.h"
/**
 * array_range - function create an array of integers.
 * @min: integer;
 * @max: integer;
 * Return: integer;
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return(NULL);
	i = min;
	while (i < max)
		i++;
	ptr = malloc(i * sizeof(ptr));
	j = 0;
	while ( min != max)
	{
		ptr[j] = min;
		min++;
		j++;
	}
	return(ptr);
}
