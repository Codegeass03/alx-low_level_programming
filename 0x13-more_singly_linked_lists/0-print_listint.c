#include<stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elemnts of a listint_t list
 * @h: linked list to print
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h ? num++ && printf("%d\n", h->n) : 0)
h = h->next;

return (num);
}
