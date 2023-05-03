#include "lists.h"

/**
 * sum_listint - calculate sum of all data in a listint_t
 * @head: Pointer to the head node of the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
listint_t *tmp;
int sum;

tmp = head, sum = 0;
while (tmp)
sum += tmp->n, tmp = tmp->next;

return (sum);
}
