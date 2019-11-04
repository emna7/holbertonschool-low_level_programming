#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the the head node
 * @head: pointer
 * Return: the head node's data
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int m;
if (*head == NULL)
return (0);
temp = (*head)->next;
m = (*head)->n;
free(*head);
*head = temp;
return (m);
}
