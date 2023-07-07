
#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned int i;
    char *result = NULL;
    unsigned int totalLength = 0;

    if (ht == NULL)
        return;

		printf("{");
    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i])
        {
            size_t size = strlen(ht->array[i]->key) + strlen(ht->array[i]->value) + 10;
            char *formattedStr = malloc(size);

            if (formattedStr == NULL)
            {
                free(result);
                return;
            }

            sprintf(formattedStr, "'%s': '%s',", ht->array[i]->key, ht->array[i]->value);

            if (result == NULL)
            {
                result = malloc(size);
                if (result == NULL)
                {
                    free(formattedStr);
                    return;
                }
                strcpy(result, formattedStr);
            }
            else
            {
                result = realloc(result, strlen(result) + strlen(formattedStr) + 1);
                if (result == NULL)
                {
                    free(formattedStr);
                    return;
                }
                strcat(result, formattedStr);
            }

            totalLength += size;
            free(formattedStr);
        }
    }

    if (result)
    {
        result[strlen(result) - 1] = '\0';
        printf("%s", result);
    }
		printf("}\n");
    free(result);
}
