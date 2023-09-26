#include<stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elemnts of a listint_t list
 * @h: linked list to print
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
if (h == NULL)
return (0);
else

printf("%d\n", h->n);
return (1 + print_listint(h->next));
}
