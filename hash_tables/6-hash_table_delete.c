#include "hash_tables.h"
/**
 * hash_table_delete - function that delete a hash table.
 * @ht: the hash table to delete it.
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *tmp, *mvht;
unsigned long int index;

if (ht == NULL)
return;
for (index = 0; index < (ht->size); index++)
{
mvht = ht->array[index];
while (mvht != NULL)
{
tmp = mvht->next;
if (mvht->key != NULL)
free(mvht->key);
if (mvht->value != NULL)
free(mvht->value);
if (mvht != NULL)
free(mvht);
mvht = tmp;
}
}
free(ht->array);
free(ht);
}
