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
listint_t *p;
listint_t *new;
unsigned int i = 0;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
p = *head;
new->n = n;
if (idx == 0)
{
listint_t *temp;
temp = *head;
new->next = temp;
*head = new;
return (new);
}
if (p == NULL)
return (NULL);
while (p != NULL && i + 1 < idx)
{
i++;
p = p->next;
if (p == NULL)
{
free(new);
return (NULL);
}
}
new->next = p->next;
p->next = new;
return (new);
}
