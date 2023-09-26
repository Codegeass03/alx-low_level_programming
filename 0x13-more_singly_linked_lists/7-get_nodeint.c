#include "lists.h"

/**
 * listint_t *get_nodeint_at_index - returns the nth node of a linked list
 * @head: The first node
 * @index: is the index of the node, starting at 0
 *
 * Return: NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;

for
(unsigned int i = 0;
temp && i < index;
i++ temp = temp->next);

return (temp ? temp : NULL);
}
