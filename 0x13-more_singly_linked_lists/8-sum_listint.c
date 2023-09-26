#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data(n) of a linked list.
 *@head: return the first node element in a linked list
 *
 * Return: sum of all data
 * else if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;

for (; head; head = head->next)
sum += head->n;

return (sum);
}
