#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a dnodeint at index idx
 * @h: pointer to list
 * @idx: index to add node at
 * @n: ->n data
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp = *h;
if (h == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0 && *h == NULL)
{
new->prev = NULL;
new->next = NULL;
*h = new;
return (new);
}
if (idx == 0 && temp != NULL)
{
new->next = temp, new->prev = NULL;
temp->prev = new, *h = new;
return (new);
}
while (temp != NULL && idx > 1)
temp = temp->next, idx--;
if (temp != NULL)
{
new->next = temp->next;
new->prev = temp;
if (temp->next == NULL)
temp->next = new;
else
{
temp->next->prev = new;
temp->next = new;
}
return (new);
}
free(new);
return (NULL);
}
