#include "search_algos.h"
/**
 * binary_search - unction that searches for a value in a sorted array.
 * @array: array of intgers.
 * @size: the size of array.
 * @value: the value to search it.
 * Return: index of value foound in array or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
int middle, i, left = 0, right = size - 1;
if (array == NULL)
return (-1);
while (left <= right)
{
middle = ((left + right) / 2);
printf("Searching in array:");
for (i = left; i <= right; i++)
{
if (i != right)
printf(" %d,", array[i]);
else
printf(" %d", array[i]);
}
printf("\n");
if (value > array[middle])
left = middle + 1;
else if (value < array[middle])
right  = middle - 1;
else if (value == array[middle])
return (middle);
}
return (-1);
}
