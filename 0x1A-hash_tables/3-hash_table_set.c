#include "hash_tables.h"
#include <string.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
	unsigned int index;
	hash_node_t *node;
	char *valueCopy;

	if(key == NULL || key[0] == '\0' || value == NULL || ht == NULL) {
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	
	node = malloc(sizeof(hash_node_t));
	if(node == NULL) {
		return (0);
	}

	valueCopy = strdup(value);
	node->key = strdup(key);
	node->value = valueCopy;

	if(ht->array[index] != NULL) 
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	} else {
		ht->array[index] = node;
	}

	return (1);
}
