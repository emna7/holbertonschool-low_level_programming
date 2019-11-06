#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a list
 * @head: pointer
 * Return:  return head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *node1 = NULL, *node2 = NULL;
if (head == NULL || *head == NULL)
return (NULL);
while (*head != NULL)
{
node1 = (*head)->next;
(*head)->next = node2;
node2 = *head;
*head = node1;
}
*head = node2;
return (*head);
}
