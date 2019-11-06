#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint2 - function that frees listint_t
 * @head: pointer
*/
void free_listint2(listint_t **head)
{
listint_t *temp = *head;
if (*head == NULL)
return;
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
