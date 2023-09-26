#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to be freed
 *
 * Return: Always 0 if success
 */
void free_listint2(listint_t **head)
{
if (head == NULL || *head == NULL)
return;

free_listint2(&((*head)->next));
free(*head);
*head = NULL;
}
