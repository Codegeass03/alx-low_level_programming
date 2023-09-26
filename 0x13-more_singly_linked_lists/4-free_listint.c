#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: list to be freed from the listint_t list
 *
 * Return: Always 0 if success
 */
void free_listint(listint_t *head)
{
listint_t *temp;

for (; head; head = temp)
{
temp = head->next;
free(head);
}
}
