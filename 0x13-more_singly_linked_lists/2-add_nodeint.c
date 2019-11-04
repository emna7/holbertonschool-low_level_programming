#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node
 * @head: pointer
 * @n: const
 * Return: adress of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
if (head == NULL)
return (NULL);
temp->next = *head;
*head = temp;
return (temp);
}
