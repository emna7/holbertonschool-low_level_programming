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
size_t x;
if (h == NULL)
return (0);
for (x = 0; h != NULL; x++)
{
printf("%d\n", h->n);
h = h->next;
}
return (x);
}
