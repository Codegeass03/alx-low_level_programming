#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees the memory allocated from a list_t list.
 * @head: pointer to the first node of list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;/*Save the reference to the next node*/
free(head->str);/*Free the string in the current node*/
free(head);/*Free the current node itself*/
head = temp;/*move to the next node*/
}
}
