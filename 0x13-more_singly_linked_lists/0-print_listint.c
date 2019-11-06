#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print items in a list
 * @h: pointer
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
size_t x = 0, s = 0;
if (h == NULL)
return (x);
while (h != NULL)
{
printf("%d\n", h->n);
s++;
h = h->next;
}
return (s);
}
