#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to search.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	unsigned int i;

	if (!key || !ht || !ht->array[index])
		return (NULL);

	for (i = index; ht->array[index]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}

	return (NULL);
}
