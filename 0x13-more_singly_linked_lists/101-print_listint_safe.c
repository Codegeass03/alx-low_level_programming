#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to the head of linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
const listint_t *current = head;

if (!head)
exit(98);

while (current)
{
nodes++;
printf("[%p] %d\n", (void *)current, current->n);

if (current <= current->next)
{
printf("linked list with a loop\n");
exit(98);
}
current =  current->next;
}
return (nodes);
}
