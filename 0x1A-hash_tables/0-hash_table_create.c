#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashtable = malloc(sizeof(hash_table_t));
unsigned long int i;
if (hashtable == NULL)
return (NULL);
hashtable->size = size;
hashtable->array = malloc(sizeof(hash_node_t *) * size);
if (hashtable->array == NULL)
{
free(hashtable);
return (NULL);
}
for (i = 0; i < size; i++)
hashtable->array[i] = NULL;
return (hashtable);
}
