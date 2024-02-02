#include "hash_tables.h"

/**
 * key_index - gives index of key
 * @key: key
 * @size: size of hashtable
 *
 * Return: index at which the key/value pair should be stored
 * in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
