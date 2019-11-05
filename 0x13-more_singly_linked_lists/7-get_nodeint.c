#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the nth node of listint
 * @head: pointer
 * @index: unsigned int
 * Return: the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *p;
unsigned int i = 0;
if (head == NULL)
return (NULL);
p = head;
if (p == NULL)
return (NULL);
while (p != NULL)
if (i != index)
return (NULL);
i++;
return (p);
}
