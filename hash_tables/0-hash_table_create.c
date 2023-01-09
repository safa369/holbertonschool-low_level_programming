#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table.
 * @size: the size of an array.
 * Return: a pointer of table or NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hstb;
unsigned long int j;

hstb = malloc(sizeof(hash_table_t));
if (!hstb)
{
return (NULL);
}
hstb->size = size;
hstb->array = malloc(sizeof(hash_node_t *) * size);
if (hstb->array == NULL)
return (NULL);
for (j = 0; j < size; j++)
hstb->array[j] = NULL;
return (hstb);
}
