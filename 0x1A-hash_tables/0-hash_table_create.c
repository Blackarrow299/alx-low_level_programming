#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size) {
	hash_table_t *hash_table;
	hash_table = malloc(sizeof(hash_table_t));
	
	hash_table->size = size;

	hash_node_t *hash_nodes = malloc(size * sizeof(hash_node_t));

	if(hash_nodes == NULL) {
		free(hash_table);
		return NULL;
	}

	hash_table->array = &hash_nodes;

	return hash_table;
}
