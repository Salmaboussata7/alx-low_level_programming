#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t singly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: void
 **/
void free_listint(listint_t *head)
{
  listint_t *current = head;
  while (current != NULL)
    {
      listint_t *temp = current;
      current = current->next;
      free(temp);
    }
}
