#include "search_algos.h"
/**
 * linear_search - function that search for value in an array of integers.
 * @array: array to search into it.
 * @size: the size of array.
 * @value: the value to search it.
 * Return: the first index of value found in array.
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (!array)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
