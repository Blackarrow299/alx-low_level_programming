#include <stdio.h>
#include "lists.h"
#include <stddef.h>

size_t print_list(const list_t *h) {
 
  size_t n = 0;
  const list_t *current = h;

  while(current != NULL){
    n++;
    current = current->next;
  } 
  printf("-> %i elements\n", n);
  return n;
}
