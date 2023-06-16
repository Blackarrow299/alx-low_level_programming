#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at a given index in a doubly linked
 * list
 * @head: Pointer to the head of the list
 * @index: Index of the desired node
 *
 * Return: Pointer to the node at the specified index, or NULL if the node is
 * not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
  dlistint_t *current = head;
  unsigned int i = 0;
  while (current != NULL) {
    if (i == index) {
      return current;
    }
    i++;
    current = current->next;
  }
  return NULL;
}
