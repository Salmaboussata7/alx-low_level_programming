/**
 * print_listint - prints all elements of a singly linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 **/
size_t print_listint(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;

    while (current)
    {
        printf("%d\n", current->n);
        count++;
        current = current->next;
    }

    return count;
}
