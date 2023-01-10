#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table.
 * @key: is the key to search it.
 * Return: the value associated with the element.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
unsigned long int index;

if (ht == NULL)
return (NULL);
if (key == NULL || (strcmp(key, "") == 0))
return (NULL);
index = (hash_djb2((const unsigned char *)key) % (ht->size));
tmp = ht->array[index];
while (tmp)
{
if (strcmp(key, tmp->key) == 0)
{
return (tmp->value);
}
tmp = tmp->next;
}
return (NULL);
}
