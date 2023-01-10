#include "hash_tables.h"
/**
 * hash_table_print - function that print a hash table.
 * @ht: the hash table to print.
*/
void hash_table_print( const hash_table_t *ht)
{
hash_node_t *tmp;
unsigned long int index;
int i = 0;

if (ht == NULL)
return;
printf("{");
for (index = 0; index < (ht->size); index++)
{
tmp = ht->array[index];
while (tmp != NULL)
{
if (i > 0)
printf(", ");
printf("\'%s\': \'%s\'", tmp->key, tmp->value);
tmp = tmp->next;
i++;
}
}
printf ("}\n");
}
