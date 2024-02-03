#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table you want to add or update the key/value
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *ptr;
	char *copyValue;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copyValue = strdup(value);
	if (copyValue == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/*handles collisions*/
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = copyValue;
			return (1);
		}
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (0);
	ptr->key = strdup(key);
	ptr->value = copyValue;
	ptr->next = ht->array[index];
	ht->array[index] = ptr;
	return (1);
}
