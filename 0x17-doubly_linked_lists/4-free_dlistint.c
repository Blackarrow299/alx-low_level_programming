#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description: Frees each node in a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *current;
  while(head != NULL) {
    current = head;
    head = head->next;
    free(current);
  }
}
