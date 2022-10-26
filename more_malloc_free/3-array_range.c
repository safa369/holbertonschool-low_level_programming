#include "main.h"
/**
 * array_range - function create an array of integers.
 * @min: integer;
 * @max: integer;
 * Return: integer;
 */
int *array_range(int min, int max)
{
	int j;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (min <= max)
	{
		ptr[j] = min;
		min++;
		j++;
	}
	return (ptr);
}
