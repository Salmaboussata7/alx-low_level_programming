#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t singly linked list and sets head to NULL.
 * @head: Pointer to the head node of the list.
 *
 * Return: void
 **/
void free_listint(listint_t *head)
{
  listint_t *current = *head, *next;

  while (current != NULL)
    {
      next = current->next;
      free(current);
      current = next;
    }
    *head = NULL;
}
