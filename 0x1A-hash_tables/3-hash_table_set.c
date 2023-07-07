#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *node;
	char *valueCopy;
	unsigned int i;

	if (key == NULL || key[0] == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(valueCopy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(valueCopy);
		free(node);
		return (0);
	}
	node->value = valueCopy;

	if (ht->array[index] != NULL)
	{
		for (i = index; ht->array[i]; i++)
		{
			if (strcmp(ht->array[i]->key, key) == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = valueCopy;
				free(node->key);
				free(node);
				return (1);
			}
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
	{
		ht->array[index] = node;
	}

	return (1);
}
