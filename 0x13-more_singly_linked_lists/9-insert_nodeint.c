#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: pointer to first node
 *@idx: index of the list where the new node should be added.
 *index starts at 0
 *@n: data to be inerted
 *Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head
* head = new;
return (new);
}

listint_t *temp = *head;
for
(unsigned int i = 0;
temp && i < idx - 1;
i++);
temp = temp->next;

if (!temp)
{
free(new);
return (NULL);
}

new->next = temp->next;
temp->next = new;
return (new);
}
