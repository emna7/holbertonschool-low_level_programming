#include "lists.h"
/**
 * listint_len - print items in a list
 * @h: pointer
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t x;
if (h == NULL)
return (0);
for (x = 0; h != NULL; x++)
{
h = h->next;
}
return (x);
}
