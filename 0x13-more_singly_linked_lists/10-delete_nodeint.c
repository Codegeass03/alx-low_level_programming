#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @index: index of the node that should be deleted.
 * @head: pointer to the first element.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
return ((*head = (*head)->next, free(temp), 1));

while (i++ < index - 1)
if (!temp || (temp->next))
return (-1);

return ((current =  temp->next, temp->next = current->next, free(current), 1));
}
