#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key.
 * @value: the value to add it.
 * Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *newn, *tmp;
unsigned long int index;

if (ht == NULL)
return (0);
index = (hash_djb2((const unsigned char *)key) % (ht->size));
if (key == NULL || value == NULL || (strcmp(key, "") == 0))
return (0);
if (ht->array[index] == NULL)
{
newn = malloc(sizeof(hash_node_t));
if (newn == NULL)
return (0);
ht->array[index] = newn;
newn->key = (strdup(key));
newn->value = (strdup(value));
newn->next = NULL;
return (1);
}
tmp = ht->array[index];
while (tmp)
{
if (strcmp(key, tmp->key) == 0)
{
free(tmp->value);
tmp->value = (strdup(value));
return (1);
}
tmp = tmp->next;
}
tmp = ht->array[index];
while (tmp)
{
newn = malloc(sizeof(hash_node_t));
if (newn == NULL)
return (0);
ht->array[index] = newn;
newn->key = (strdup(key));
newn->value = (strdup(value));
newn->next = tmp;
ht->array[index] = newn;
return (1);
}
return (0);
}
