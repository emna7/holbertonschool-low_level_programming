#include "lists.h"
/**
 * get_dnodeint_at_index - gets a dnodeint from a dlistint
 * @head: pointer to first element of list
 * @index: index to get dnode at
 * Return: pointer to node at index, or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
return (NULL);
while (head != NULL && i < index)
{
head = head->next;
i++;
}
if (i == index)
return (head);
else
return (NULL);
}
