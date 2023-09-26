#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element node in list
 * @n: data to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *current;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (!*head)
{
*head = new;
return (new);
}
for (current = *head; current->next; current = current->next)
{
	/*traverse the list till the end*/
}
current->next = new;

return (new);
}
