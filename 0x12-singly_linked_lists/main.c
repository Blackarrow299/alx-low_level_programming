#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


int main(void)
{
  list_t *head;
  list_t hello = {"World", 5, NULL};

  head = &hello;
  print_list(head);
  return (0);
}
