#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: pointer to head of list
 * @n: data for ->n of new node
 * Return: address of new node, NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end = malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;
if (end == NULL)
return (NULL);
end->n = n;
end->prev = NULL;
end->next = NULL;
if (*head == NULL)
{
*head = end;
return (*head);
}
while (temp->next != NULL)
{
temp = temp->next;
}
end->prev = temp;
temp->next = end;
return (end);
}
