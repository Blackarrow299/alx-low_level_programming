#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value to be assigned to the new node
 *
 * Return: Address of the newly added node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new;
  new = malloc(sizeof(dlistint_t));
  new->n = n;
  new->next = NULL;
  new->prev = NULL;
  if (*head != NULL)
  {
    new->next = *head;
    (*head)->prev = new;
  }
  *head = new;
  return new;
}
