#include "hash_tables.h" 
void hash_table_delete(hash_table_t *ht) {
	unsigned int i = 0;
	hash_node_t *node;
	hash_node_t *tmp;
	for(i = 0;i < ht->size;i++) {
		if(ht->array[i])
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				while (node != NULL)
				{
					tmp = node->next;
					free(node->key);
					free(node->value);
					free(node);
					node = tmp;
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
