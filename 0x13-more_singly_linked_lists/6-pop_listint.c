#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the list
 *
 * Return:  the head node’s data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
if (head == NULL || *head == NULL)
return (0);

int num = (*head)->n;
listint_t *temp = *head;
*head = (*head)->next;
free(temp);

return (num);
}
