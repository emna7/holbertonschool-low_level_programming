#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: the address of the new node, NULL otherwise
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode;
listint_t *node = *head;
newnode = malloc(sizeof(listint_t));
newnode->n = n;
if (head == NULL)
return (NULL);
if (idx == 0)
{
newnode->next = *head;
return (newnode);
}
while (idx - 1 > 0)
{
node = node->next;
idx--;
}
newnode->next = node->next;
node->next = newnode;
return (newnode);
}
