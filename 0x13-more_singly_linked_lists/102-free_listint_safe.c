#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to first node
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
len += (diff > 0) ? (temp = (*h)->next, free(*h),
*h = temp, 1) : (free(*h), *h = NULL, 1);
}
*h = NULL;

return (len);
}
