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
listint_t *temp, *new;
if (head == NULL)
{
return;
}
new = *head;
while (new != NULL)
{
temp = new;
new = new->next;
free(temp);
}
*head = NULL;
}
