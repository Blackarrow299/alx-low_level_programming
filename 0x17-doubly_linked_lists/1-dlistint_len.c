#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t count = 0;
  const dlistint_t *current = h;

  while (current != NULL)
  {
    current = current->next;
    count++;
  }

  return count;
}
