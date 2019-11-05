#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - unction that returns the sum of all the data (n) of listint
 * @head: pointer
 * Return: the sum of the elements
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *p;
if (head == NULL)
return (0);
p = head;
while (p != NULL)
{
sum += p->n;
p = p->next;
}
return (sum);
}
