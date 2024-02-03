#include "hash_tables.h"

/**
 * hash_table_get - retieves a value associated with a key
 * @ht: hashtable you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with element, or NULL if key
 * couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	ptr = ht->array[index];
	while (ptr && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	return (ptr->value);
}
