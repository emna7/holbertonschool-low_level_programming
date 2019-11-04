#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a node at the end of a list
 * @head: pointer
 * @n: const
 * Return: the adress of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *p;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
p = *head;
if (p != NULL)
{
while (p->next != NULL)
p = p->next;
p->next = new;
return (new);
}
*head = new;
return (new);
}
