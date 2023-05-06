#include <stdio.h>
#include "lists.h"
#include <stddef.h>

size_t print_list(const list_t *h) {
  size_t n = 0;
  do{
    if(h->str == NULL) {
      printf("[0] (nil) \n");
    }else {
      printf("[%i] %s \n",h->len, h->str);
    }
    n++;
  } while(h->next != NULL); 
  printf("-> %i elements\n", n);
  return n;
}

