#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - frees a listint_t
 * @head: pointer
 */

void free_listint(listint_t *head)
{
listint_t *temp;
if (head == NULL)
return;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
