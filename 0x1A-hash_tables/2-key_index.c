#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * key_index - returns the index of a given key
 * @key: key to check
 * @size: size of hash table array
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
hash = hash_djb2(key) % size;
return (hash);
}
